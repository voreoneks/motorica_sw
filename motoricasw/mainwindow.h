#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QDoubleValidator>
#include <QIntValidator>
#include <QLabel>
#include <QLineEdit>
#include "plotview.h"
#include <QDebug>
#include <QMessageBox>
#include "usbhid.h"

enum DevCmd
{
    GetStatus = 0,
    Stop,
    Start,
    Compress,
    Decompress,
    SetServoAngle,

    CalibrationMode,
    EraseCalibration,
    CancelCalibration,
    CalibrationWeight
};

typedef struct
{
    uint8_t mode;
    uint8_t maxCycleOvertimesNum;
    uint8_t servoType;
    uint8_t endingFlags;
    uint32_t cyclesNum;
    float pressingMaxCurrent;
    float pressingMaxForce;
    float pressingTime;
    float coolingTime;
    float maxTemperature;
    float maxCycleTime;
    float minServoAngle;
    float maxServoAngle;
} SessionSettings;

class QTimer;
class QFile;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void fileError();
private slots:
    void on_cb_EndByCurrent_stateChanged(int arg1);
    void on_cb_EndByForce_stateChanged(int arg1);
    void onTimerUpdate();
    void on_pb_start_clicked();
    void on_pb_stop_clicked();
    void msgFileError();
    void on_cb_Mode_currentIndexChanged(int index);
    void on_pb_startCal_clicked();
    void on_pb_cancelCal_clicked();
    void on_pb_compress_clicked();
    void on_cb_PressingTime_stateChanged(int arg1);
    void on_pb_setAngle_clicked();
    void on_pb_decompress_clicked();

private:
    void devSendCmd(DevCmd cmd, void* arg = NULL, int argSize = 0);
    void fileTask();
    void fileAppendData(QVector<float> *force, QVector<float> *current);
    void setControlsState(bool enabled);
    bool checkSessionSettings();

    SessionSettings packSessionSettings();

    Ui::MainWindow *ui;
    PlotView* plotView;

    // Emergency stop button state indicator
    QLabel* estopButtonImg;

    // Two pointers per value for double buffering
    QVector<float> *forces[2];
    QVector<float> *currents[2];
    int activeBuffer = 0;

    // Timer for read chart data
    QTimer* chartUpdateTimer;

    // File for save a lot of received data from sensors
    QFile* logFile;

    // Message box for warning/error notifications
    QMessageBox *msgBox;

    // Flag for asynchronous file write
    bool fileUpdateFlag = false;
    bool exit = false;

    QIntValidator *cyclesNumVal;
    QDoubleValidator *dcCurrentVal;
    QDoubleValidator *forceVal;
    QDoubleValidator *pressTimeVal;
    QIntValidator *servoMinVal;
    QIntValidator *servoMaxVal;
    QDoubleValidator *pauseTimeVal;
    QIntValidator *overheatingVal;
    QDoubleValidator *overtimeVal;
    QIntValidator *maxOvertimesVal;
    QDoubleValidator *calWeightVal;

    // USB HID device for working with testing stand
    USBHID* device;

    static constexpr int DCMotor = 0;
    static constexpr int Servo = 1;
    static constexpr int Prosthesis = 2;
};
#endif // MAINWINDOW_H
