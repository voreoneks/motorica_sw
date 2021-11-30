#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtConcurrent/QtConcurrent>
#include <QTimer>
#include "hidapi.h"

constexpr int DataRate = 10;
constexpr int LogBufferSize = 10 * DataRate;
constexpr int usbDevVID = 0x4322;
constexpr int usbDevPID = 0x1011;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    on_cb_EndByCurrent_stateChanged(0);
    on_cb_EndByForce_stateChanged(0);
    on_cb_PressingTime_stateChanged(0);
    on_cb_Mode_currentIndexChanged(0);

    estopButtonImg = new QLabel(this);
    estopButtonImg->setPixmap(QPixmap(":/estop.png"));
    estopButtonImg->setVisible(false);
    ui->statusbar->addPermanentWidget(estopButtonImg);

    cyclesNumVal = new QIntValidator(1, 10000000, this);
    ui->le_sessionCycles->setValidator(cyclesNumVal);

    dcCurrentVal = new QDoubleValidator(0.1, 10, 1, this);
    dcCurrentVal->setNotation(QDoubleValidator::StandardNotation);
    ui->le_EndByCurrent->setValidator(dcCurrentVal);

    forceVal = new QDoubleValidator(0.05, 20, 1, this);
    forceVal->setNotation(QDoubleValidator::StandardNotation);
    ui->le_EndByForce->setValidator(forceVal);

    pressTimeVal = new QDoubleValidator(0.2, 10, 1, this);
    pressTimeVal->setNotation(QDoubleValidator::StandardNotation);
    ui->le_PressingTime->setValidator(pressTimeVal);

    pauseTimeVal = new QDoubleValidator(0, 10, 0, this);
    pauseTimeVal->setNotation(QDoubleValidator::StandardNotation);
    ui->le_pauseTime->setValidator(pauseTimeVal);

    overheatingVal = new QIntValidator(25, 100, this);
    ui->le_overheating->setValidator(overheatingVal);

    overtimeVal = new QDoubleValidator(0.2, 10, 1, this);
    overtimeVal->setNotation(QDoubleValidator::StandardNotation);
    ui->le_overtime->setValidator(overtimeVal);

    maxOvertimesVal = new QIntValidator(0, 10, this);
    ui->le_maxOvertimes->setValidator(maxOvertimesVal);

    servoMaxVal = new QIntValidator(0, 359, this);
    ui->le_servoMaxAngle->setValidator(servoMaxVal);

    servoMinVal = new QIntValidator(0, 359, this);
    ui->le_servoMinAngle->setValidator(servoMinVal);

    calWeightVal = new QDoubleValidator(0, 20, 3, this);
    calWeightVal->setNotation(QDoubleValidator::StandardNotation);
    ui->le_calibrationWeight->setValidator(calWeightVal);

    msgBox = new QMessageBox(this);
    msgBox->setIcon(QMessageBox::Icon::Critical);
    connect(this, SIGNAL(fileError()), this, SLOT(msgFileError()));

    chartUpdateTimer = new QTimer();
    chartUpdateTimer->setInterval(94);
    connect(chartUpdateTimer, SIGNAL(timeout()), this, SLOT(onTimerUpdate()));

    plotView = new PlotView(this, 13, 11, DataRate);
    QSizePolicy policy = QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
    plotView->setSizePolicy(policy);
    plotView->setFrameShape(QFrame::Shape::NoFrame);
    ui->gb_plots->layout()->addWidget(plotView);

    forces[0] = new QVector<float>();
    forces[1] = new QVector<float>();
    currents[0] = new QVector<float>();
    currents[1] = new QVector<float>();

    device = new USBHID();

    logFile = new QFile("log.txt");
    logFile->open(QFile::OpenModeFlag::ReadWrite);
    QtConcurrent::run(this, &MainWindow::fileTask);
}

MainWindow::~MainWindow()
{
    exit = true;
    delete ui;
}

void MainWindow::onTimerUpdate()
{
    static int pointsCount = 0;
    static qreal delta = 0;

    if (pointsCount < LogBufferSize)
    {
        qreal v = 4 + (qreal)(rand() % 100) / 1000 + delta;
        qreal i = 7 + (qreal)(rand() % 100) / 1000 - delta;

        delta += 0.01;

        forces[activeBuffer]->append(v);
        currents[activeBuffer]->append(i);
        plotView->addValues(v, i);

        pointsCount++;
    }
    else
    {
        activeBuffer ^= 1;
        fileUpdateFlag = true;
        pointsCount = 0;
    }
}

void MainWindow::devSendCmd(DevCmd cmd, void* arg, int argSize)
{
    device->sendCmd(1, (uint8_t)cmd, (uint8_t*)arg, argSize);
}

void MainWindow::fileTask()
{
    while(1)
    {
        if (fileUpdateFlag)
        {
            // Copy data from filled buffers to opened file and clear buffers after
            fileAppendData(forces[!activeBuffer], currents[!activeBuffer]);
            forces[!activeBuffer]->clear();
            currents[!activeBuffer]->clear();
            fileUpdateFlag = false;
        }
        if (exit)
            break;
    }
}

void MainWindow::fileAppendData(QVector<float> *force, QVector<float> *current)
{
    // Make single text block from many records for single file write operation
    QString buffer;
    for (int i = 0; i < LogBufferSize; i++)
        buffer.append(QString::asprintf("Force: %5.2f, current: %5.2f \r\n", force->at(i), current->at(i)));

    // Check that file opened
    if (!logFile->isOpen())
        logFile->open(QFile::OpenModeFlag::ReadWrite);

    if (logFile->write(buffer.toUtf8()) > 0)
    {
        // If all file operations succesful then return
        if (logFile->flush())
            return;
    }

    // If we go to this we have file write error
    emit fileError();
}

void MainWindow::on_cb_EndByCurrent_stateChanged(int arg1)
{
    ui->le_EndByCurrent->setEnabled(arg1);
}

void MainWindow::on_cb_EndByForce_stateChanged(int arg1)
{
    ui->le_EndByForce->setEnabled(arg1);
}

void MainWindow::on_cb_PressingTime_stateChanged(int arg1)
{
    ui->le_PressingTime->setEnabled(arg1);
}

void MainWindow::on_pb_start_clicked()
{
    if (checkSessionSettings())
        return;

    if (device->open(usbDevVID, usbDevPID))
    {
        SessionSettings settings = packSessionSettings();
        devSendCmd(DevCmd::Start, &settings, sizeof(settings));
    }

    ui->pb_pause->setEnabled(true);
    ui->pb_stop->setEnabled(true);

    setControlsState(false);

    if (!logFile->isOpen())
        logFile->open(QFile::OpenModeFlag::ReadWrite);
    logFile->remove();
    chartUpdateTimer->start();
}

void MainWindow::on_pb_stop_clicked()
{
    ui->pb_pause->setEnabled(false);
    ui->pb_stop->setEnabled(false);

    setControlsState(true);

    if (logFile->isOpen())
        logFile->close();
    chartUpdateTimer->stop();
}

void MainWindow::msgFileError()
{
    msgBox->setWindowTitle("Ошибка");
    msgBox->setText(QString("Ошибка записи данных в файл. Проверьте доступность файла \"%1\"").arg(logFile->fileName()));
    msgBox->exec();
}

void MainWindow::on_pb_startCal_clicked()
{
    setControlsState(false);
    ui->pb_start->setEnabled(false);
    ui->pb_cancelCal->setEnabled(true);
    ui->pb_CalWeightWrite->setEnabled(true);
    ui->le_calibrationWeight->setEnabled(true);
}

void MainWindow::on_pb_cancelCal_clicked()
{
    setControlsState(true);
    ui->pb_start->setEnabled(true);
    ui->pb_cancelCal->setEnabled(false);
    ui->pb_CalWeightWrite->setEnabled(false);
    ui->le_calibrationWeight->setEnabled(false);
}

void MainWindow::on_pb_compress_clicked()
{
    devSendCmd(DevCmd::Compress);
}

void MainWindow::on_pb_decompress_clicked()
{
    devSendCmd(DevCmd::Decompress);
}

void MainWindow::on_pb_setAngle_clicked()
{
    float angle = ui->sb_angle->text().toFloat();
    devSendCmd(DevCmd::SetServoAngle, &angle, sizeof(angle));
}

void MainWindow::on_cb_Mode_currentIndexChanged(int index)
{
    ui->cb_EndByCurrent->setVisible(index == DCMotor);
    ui->le_EndByCurrent->setVisible(index == DCMotor);
    ui->l_EndByCurrent->setVisible(index == DCMotor);
    ui->cb_EndByForce->setVisible(index != Servo);
    ui->le_EndByForce->setVisible(index != Servo);
    ui->l_EndByForce->setVisible(index != Servo);
    ui->l_servoMinAngle->setVisible(index == Servo);
    ui->l_servoMinAngle2->setVisible(index == Servo);
    ui->le_servoMinAngle->setVisible(index == Servo);
    ui->l_servoMaxAngle->setVisible(index == Servo);
    ui->l_servoMaxAngle2->setVisible(index == Servo);
    ui->le_servoMaxAngle->setVisible(index == Servo);
    ui->rb_digitalServo->setVisible(index == Servo);
    ui->rb_analogServo->setVisible(index == Servo);
}

void MainWindow::setControlsState(bool enabled)
{
    ui->cb_EndByForce->setEnabled(enabled);
    ui->cb_EndByCurrent->setEnabled(enabled);
    ui->cb_PressingTime->setEnabled(enabled);
    ui->pb_compress->setEnabled(enabled);
    ui->pb_decompress->setEnabled(enabled);
    ui->pb_setAngle->setEnabled(enabled);
    ui->pb_start->setEnabled(enabled);
    ui->le_EndByCurrent->setEnabled(ui->cb_EndByCurrent->checkState() && enabled);
    ui->le_EndByForce->setEnabled(ui->cb_EndByForce->checkState() && enabled);
    ui->le_PressingTime->setEnabled(ui->cb_PressingTime->checkState() && enabled);
    ui->le_servoMaxAngle->setEnabled(enabled);
    ui->le_servoMinAngle->setEnabled(enabled);
    ui->le_pauseTime->setEnabled(enabled);
    ui->le_overtime->setEnabled(enabled);
    ui->le_overheating->setEnabled(enabled);
    ui->le_maxOvertimes->setEnabled(enabled);
    ui->cb_Mode->setEnabled(enabled);
    ui->le_sessionCycles->setEnabled(enabled);
    ui->le_prothesisId->setEnabled(enabled);
    ui->pb_startCal->setEnabled(enabled);
    ui->pb_clearCal->setEnabled(enabled);
    ui->sb_angle->setEnabled(enabled);
}

SessionSettings MainWindow::packSessionSettings()
{
    SessionSettings settings;
    settings.endingFlags = ui->cb_EndByCurrent->checkState();
    settings.endingFlags |= ((int)ui->cb_EndByForce->checkState() << 1);
    settings.endingFlags |= ((int)ui->cb_PressingTime->checkState() << 2);
    settings.mode = ui->cb_Mode->currentIndex();
    settings.maxCycleOvertimesNum = ui->le_maxOvertimes->text().toUInt();
    settings.servoType = ui->rb_digitalServo->isChecked();
    settings.cyclesNum = ui->le_sessionCycles->text().toUInt();
    settings.pressingMaxCurrent = ui->le_EndByCurrent->text().toFloat();
    settings.pressingMaxForce = ui->le_EndByForce->text().toFloat();
    settings.pressingTime = ui->le_PressingTime->text().toFloat();
    settings.coolingTime = ui->le_pauseTime->text().toFloat();
    settings.maxTemperature = ui->le_overheating->text().toFloat();
    settings.maxCycleTime = ui->le_overtime->text().toFloat();
    settings.minServoAngle = ui->le_servoMinAngle->text().toFloat();
    settings.maxServoAngle = ui->le_servoMaxAngle->text().toFloat();
    return settings;
}

bool MainWindow::checkSessionSettings()
{
    qreal dcCurrent = ui->le_EndByCurrent->text().toDouble();
    qreal force = ui->le_EndByForce->text().toDouble();
    qreal pressingTime = ui->le_PressingTime->text().toDouble();
    qreal pauseTime = ui->le_pauseTime->text().toDouble();
    qreal maxTemp = ui->le_overheating->text().toDouble();
    qreal overtime = ui->le_overtime->text().toDouble();
    int maxOvertimes = ui->le_maxOvertimes->text().toInt();
    int servoMin = ui->le_servoMinAngle->text().toInt();
    int servoMax = ui->le_servoMaxAngle->text().toInt();
    int sessionCycles = ui->le_sessionCycles->text().toInt();

    QString error;
    bool result = false;
    int errorNum = 0;

    if (!ui->le_prothesisId->text().length())
    {
        errorNum++;
        error += QString("%1) Поле \"ID протеза\" должно быть заполнено\r\n").arg(errorNum);
        result = true;
    }
    if (dcCurrent < 0.1 || dcCurrent > 10)
    {
        errorNum++;
        error += QString("%1) Ток не может быть менее 0.1А или более 10А\r\n").arg(errorNum);
        result = true;
    }
    if (force < 0.05 || force > 20)
    {
        errorNum++;
        error += QString("%1) Сила не может быть менее 0.05кг или более 20кг\r\n").arg(errorNum);
        result = true;
    }
    if (pressingTime < 0.2 || pressingTime > 10)
    {
        errorNum++;
        error += QString("%1) Время сжатия/разжатия не может быть менее 0.2с или более 10с\r\n").arg(errorNum);
        result = true;
    }
    if (pauseTime < 0 || pauseTime > 10)
    {
        errorNum++;
        error += QString("%1) Время паузы не может быть менее 0с или более 10с\r\n").arg(errorNum);
        result = true;
    }
    if (maxTemp < 25 || maxTemp > 100)
    {
        errorNum++;
        error += QString("%1) Температура не может быть менее 25 градусов или более 100 градусов\r\n").arg(errorNum);
        result = true;
    }
    if (overtime < 0.2 || overtime > 10)
    {
        errorNum++;
        error += QString("%1) Время АОЦ не может быть менее 0.2с или более 10с\r\n").arg(errorNum);
        result = true;
    }
    if (maxOvertimes < 0 || maxOvertimes > 10)
    {
        errorNum++;
        error += QString("%1) Максимальное число неудачных циклов для АОС должно быть от 0с до 10с\r\n").arg(errorNum);
        result = true;
    }
    if (servoMin < 0 || servoMin > 359)
    {
        errorNum++;
        error += QString("%1) Минимальный угол сервомашинки должен быть от 0 до 359 градусов\r\n").arg(errorNum);
        result = true;
    }
    if (servoMax < 0 || servoMax > 359)
    {
        errorNum++;
        error += QString("%1) Максимальный угол сервомашинки должен быть от 0 до 359 градусов\r\n").arg(errorNum);
        result = true;
    }
    if (servoMin > servoMax)
    {
        errorNum++;
        error += QString("%1) Минимальный угол сервомашинки должен быть меньше максимального\r\n").arg(errorNum);
        result = true;
    }
    if (sessionCycles < 1 || sessionCycles > 10000000)
    {
        errorNum++;
        error += QString("%1) kkjkkj\r\n").arg(errorNum);
        result = true;
    }

    if (result)
    {
        msgBox->setText(error);
        msgBox->exec();
    }
    return result;
}
