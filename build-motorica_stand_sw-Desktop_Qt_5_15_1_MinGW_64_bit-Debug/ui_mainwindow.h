/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gb_settings;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *le_prothesisId;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *le_sessionCycles;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *cb_Mode;
    QGridLayout *gridLayout_2;
    QCheckBox *cb_EndByForce;
    QLineEdit *le_pauseTime;
    QLabel *l_PressingTime;
    QLineEdit *le_servoMinAngle;
    QLabel *l_pauseTime;
    QLabel *l_servoMaxAngle2;
    QLabel *l_pauseTime2;
    QLabel *l_overtime;
    QLineEdit *le_overheating;
    QLineEdit *le_EndByCurrent;
    QCheckBox *cb_PressingTime;
    QLineEdit *le_EndByForce;
    QCheckBox *cb_EndByCurrent;
    QLabel *l_overheating2;
    QLineEdit *le_servoMaxAngle;
    QLabel *l_servoMinAngle2;
    QLabel *l_overtime2;
    QLabel *l_servoMaxAngle;
    QLabel *l_EndByForce;
    QLabel *l_servoMinAngle;
    QLineEdit *le_overtime;
    QLabel *l_EndByCurrent;
    QLineEdit *le_PressingTime;
    QLabel *l_overheating;
    QLabel *l_overiteration;
    QLineEdit *le_maxOvertimes;
    QLabel *l_overiteration2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rb_digitalServo;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *rb_analogServo;
    QGridLayout *gridLayout_5;
    QPushButton *pb_start;
    QPushButton *pb_pause;
    QPushButton *pb_stop;
    QSpinBox *sb_angle;
    QPushButton *pb_decompress;
    QPushButton *pb_compress;
    QLabel *l_degrees;
    QPushButton *pb_setAngle;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *gb_calibrate;
    QGridLayout *gridLayout;
    QPushButton *pb_startCal;
    QPushButton *pb_clearCal;
    QPushButton *pb_CalWeightWrite;
    QLineEdit *le_calibrationWeight;
    QLabel *l_calibrationWeight;
    QPushButton *pb_cancelCal;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *gb_plots;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gb_stats;
    QGridLayout *gridLayout_4;
    QLabel *l_peakcurrent;
    QLabel *l_globalstate;
    QLabel *label_26;
    QLabel *label_35;
    QLabel *l_noise;
    QLabel *l_voltage;
    QLabel *l_peakcurrentmean;
    QLabel *label_27;
    QLabel *label_25;
    QLabel *l_force;
    QLabel *label_2;
    QLabel *l_freecurrent;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label_33;
    QLabel *l_motortemp;
    QLabel *label_31;
    QLabel *label_29;
    QLabel *l_worktime;
    QLabel *label_23;
    QLabel *l_meancycletime;
    QLabel *l_cyclescurrent;
    QLabel *l_workendtime;
    QLabel *label_32;
    QLabel *l_current;
    QLabel *l_loadcurrent;
    QLabel *label_34;
    QLabel *label_24;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_30;
    QLabel *label_28;
    QLabel *l_cycleselapsed;
    QLabel *l_lastcycletime;
    QWidget *tab_2;
    QPushButton *pb_openLogfile;
    QLabel *label_4;
    QLineEdit *le_prosthesisId2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QCameraViewfinder *viewfinder;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1109, 813);
        MainWindow->setMinimumSize(QSize(1000, 680));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gb_settings = new QGroupBox(tab);
        gb_settings->setObjectName(QString::fromUtf8("gb_settings"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gb_settings->sizePolicy().hasHeightForWidth());
        gb_settings->setSizePolicy(sizePolicy2);
        gb_settings->setMinimumSize(QSize(405, 430));
        gb_settings->setMaximumSize(QSize(405, 16777126));
        verticalLayout_2 = new QVBoxLayout(gb_settings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(gb_settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        le_prothesisId = new QLineEdit(gb_settings);
        le_prothesisId->setObjectName(QString::fromUtf8("le_prothesisId"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(le_prothesisId->sizePolicy().hasHeightForWidth());
        le_prothesisId->setSizePolicy(sizePolicy4);
        le_prothesisId->setMaximumSize(QSize(16777215, 16777215));
        le_prothesisId->setMaxLength(30);

        gridLayout_3->addWidget(le_prothesisId, 0, 2, 1, 1);

        label_19 = new QLabel(gb_settings);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy3.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy3);
        label_19->setMaximumSize(QSize(16777215, 16777215));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_19, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        le_sessionCycles = new QLineEdit(gb_settings);
        le_sessionCycles->setObjectName(QString::fromUtf8("le_sessionCycles"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(le_sessionCycles->sizePolicy().hasHeightForWidth());
        le_sessionCycles->setSizePolicy(sizePolicy5);
        le_sessionCycles->setMinimumSize(QSize(130, 0));
        le_sessionCycles->setMaximumSize(QSize(130, 16777215));
        le_sessionCycles->setMaxLength(10);

        horizontalLayout_2->addWidget(le_sessionCycles);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        label = new QLabel(gb_settings);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        cb_Mode = new QComboBox(gb_settings);
        cb_Mode->addItem(QString());
        cb_Mode->addItem(QString());
        cb_Mode->addItem(QString());
        cb_Mode->setObjectName(QString::fromUtf8("cb_Mode"));
        sizePolicy5.setHeightForWidth(cb_Mode->sizePolicy().hasHeightForWidth());
        cb_Mode->setSizePolicy(sizePolicy5);
        cb_Mode->setMinimumSize(QSize(130, 0));
        cb_Mode->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_3->addWidget(cb_Mode);


        gridLayout_3->addLayout(horizontalLayout_3, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cb_EndByForce = new QCheckBox(gb_settings);
        cb_EndByForce->setObjectName(QString::fromUtf8("cb_EndByForce"));
        sizePolicy4.setHeightForWidth(cb_EndByForce->sizePolicy().hasHeightForWidth());
        cb_EndByForce->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(cb_EndByForce, 1, 0, 1, 1);

        le_pauseTime = new QLineEdit(gb_settings);
        le_pauseTime->setObjectName(QString::fromUtf8("le_pauseTime"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(le_pauseTime->sizePolicy().hasHeightForWidth());
        le_pauseTime->setSizePolicy(sizePolicy6);
        le_pauseTime->setMaximumSize(QSize(45, 16777215));
        le_pauseTime->setMaxLength(5);

        gridLayout_2->addWidget(le_pauseTime, 3, 1, 1, 1);

        l_PressingTime = new QLabel(gb_settings);
        l_PressingTime->setObjectName(QString::fromUtf8("l_PressingTime"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(l_PressingTime->sizePolicy().hasHeightForWidth());
        l_PressingTime->setSizePolicy(sizePolicy7);
        l_PressingTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_PressingTime, 2, 2, 1, 1);

        le_servoMinAngle = new QLineEdit(gb_settings);
        le_servoMinAngle->setObjectName(QString::fromUtf8("le_servoMinAngle"));
        sizePolicy6.setHeightForWidth(le_servoMinAngle->sizePolicy().hasHeightForWidth());
        le_servoMinAngle->setSizePolicy(sizePolicy6);
        le_servoMinAngle->setMaximumSize(QSize(45, 16777215));
        le_servoMinAngle->setMaxLength(5);

        gridLayout_2->addWidget(le_servoMinAngle, 7, 1, 1, 1);

        l_pauseTime = new QLabel(gb_settings);
        l_pauseTime->setObjectName(QString::fromUtf8("l_pauseTime"));
        sizePolicy4.setHeightForWidth(l_pauseTime->sizePolicy().hasHeightForWidth());
        l_pauseTime->setSizePolicy(sizePolicy4);
        l_pauseTime->setMaximumSize(QSize(8888, 16777215));
        l_pauseTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_pauseTime, 3, 0, 1, 1);

        l_servoMaxAngle2 = new QLabel(gb_settings);
        l_servoMaxAngle2->setObjectName(QString::fromUtf8("l_servoMaxAngle2"));
        sizePolicy7.setHeightForWidth(l_servoMaxAngle2->sizePolicy().hasHeightForWidth());
        l_servoMaxAngle2->setSizePolicy(sizePolicy7);
        l_servoMaxAngle2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_servoMaxAngle2, 8, 2, 1, 1);

        l_pauseTime2 = new QLabel(gb_settings);
        l_pauseTime2->setObjectName(QString::fromUtf8("l_pauseTime2"));
        sizePolicy7.setHeightForWidth(l_pauseTime2->sizePolicy().hasHeightForWidth());
        l_pauseTime2->setSizePolicy(sizePolicy7);
        l_pauseTime2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_pauseTime2, 3, 2, 1, 1);

        l_overtime = new QLabel(gb_settings);
        l_overtime->setObjectName(QString::fromUtf8("l_overtime"));
        sizePolicy4.setHeightForWidth(l_overtime->sizePolicy().hasHeightForWidth());
        l_overtime->setSizePolicy(sizePolicy4);
        l_overtime->setMaximumSize(QSize(8888, 16777215));
        l_overtime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_overtime, 5, 0, 1, 1);

        le_overheating = new QLineEdit(gb_settings);
        le_overheating->setObjectName(QString::fromUtf8("le_overheating"));
        sizePolicy6.setHeightForWidth(le_overheating->sizePolicy().hasHeightForWidth());
        le_overheating->setSizePolicy(sizePolicy6);
        le_overheating->setMaximumSize(QSize(45, 16777215));
        le_overheating->setMaxLength(5);

        gridLayout_2->addWidget(le_overheating, 4, 1, 1, 1);

        le_EndByCurrent = new QLineEdit(gb_settings);
        le_EndByCurrent->setObjectName(QString::fromUtf8("le_EndByCurrent"));
        sizePolicy6.setHeightForWidth(le_EndByCurrent->sizePolicy().hasHeightForWidth());
        le_EndByCurrent->setSizePolicy(sizePolicy6);
        le_EndByCurrent->setMaximumSize(QSize(45, 16777215));
        le_EndByCurrent->setMaxLength(5);

        gridLayout_2->addWidget(le_EndByCurrent, 0, 1, 1, 1);

        cb_PressingTime = new QCheckBox(gb_settings);
        cb_PressingTime->setObjectName(QString::fromUtf8("cb_PressingTime"));
        sizePolicy4.setHeightForWidth(cb_PressingTime->sizePolicy().hasHeightForWidth());
        cb_PressingTime->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(cb_PressingTime, 2, 0, 1, 1);

        le_EndByForce = new QLineEdit(gb_settings);
        le_EndByForce->setObjectName(QString::fromUtf8("le_EndByForce"));
        sizePolicy6.setHeightForWidth(le_EndByForce->sizePolicy().hasHeightForWidth());
        le_EndByForce->setSizePolicy(sizePolicy6);
        le_EndByForce->setMaximumSize(QSize(45, 16777215));
        le_EndByForce->setMaxLength(5);

        gridLayout_2->addWidget(le_EndByForce, 1, 1, 1, 1);

        cb_EndByCurrent = new QCheckBox(gb_settings);
        cb_EndByCurrent->setObjectName(QString::fromUtf8("cb_EndByCurrent"));
        sizePolicy4.setHeightForWidth(cb_EndByCurrent->sizePolicy().hasHeightForWidth());
        cb_EndByCurrent->setSizePolicy(sizePolicy4);
        cb_EndByCurrent->setAcceptDrops(false);
        cb_EndByCurrent->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(cb_EndByCurrent, 0, 0, 1, 1);

        l_overheating2 = new QLabel(gb_settings);
        l_overheating2->setObjectName(QString::fromUtf8("l_overheating2"));
        sizePolicy7.setHeightForWidth(l_overheating2->sizePolicy().hasHeightForWidth());
        l_overheating2->setSizePolicy(sizePolicy7);
        l_overheating2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_overheating2, 4, 2, 1, 1);

        le_servoMaxAngle = new QLineEdit(gb_settings);
        le_servoMaxAngle->setObjectName(QString::fromUtf8("le_servoMaxAngle"));
        sizePolicy6.setHeightForWidth(le_servoMaxAngle->sizePolicy().hasHeightForWidth());
        le_servoMaxAngle->setSizePolicy(sizePolicy6);
        le_servoMaxAngle->setMaximumSize(QSize(45, 16777215));
        le_servoMaxAngle->setMaxLength(5);

        gridLayout_2->addWidget(le_servoMaxAngle, 8, 1, 1, 1);

        l_servoMinAngle2 = new QLabel(gb_settings);
        l_servoMinAngle2->setObjectName(QString::fromUtf8("l_servoMinAngle2"));
        sizePolicy7.setHeightForWidth(l_servoMinAngle2->sizePolicy().hasHeightForWidth());
        l_servoMinAngle2->setSizePolicy(sizePolicy7);
        l_servoMinAngle2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_servoMinAngle2, 7, 2, 1, 1);

        l_overtime2 = new QLabel(gb_settings);
        l_overtime2->setObjectName(QString::fromUtf8("l_overtime2"));
        sizePolicy7.setHeightForWidth(l_overtime2->sizePolicy().hasHeightForWidth());
        l_overtime2->setSizePolicy(sizePolicy7);
        l_overtime2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_overtime2, 5, 2, 1, 1);

        l_servoMaxAngle = new QLabel(gb_settings);
        l_servoMaxAngle->setObjectName(QString::fromUtf8("l_servoMaxAngle"));
        sizePolicy4.setHeightForWidth(l_servoMaxAngle->sizePolicy().hasHeightForWidth());
        l_servoMaxAngle->setSizePolicy(sizePolicy4);
        l_servoMaxAngle->setMaximumSize(QSize(8888, 16777215));
        l_servoMaxAngle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_servoMaxAngle, 8, 0, 1, 1);

        l_EndByForce = new QLabel(gb_settings);
        l_EndByForce->setObjectName(QString::fromUtf8("l_EndByForce"));
        sizePolicy7.setHeightForWidth(l_EndByForce->sizePolicy().hasHeightForWidth());
        l_EndByForce->setSizePolicy(sizePolicy7);
        l_EndByForce->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_EndByForce, 1, 2, 1, 1);

        l_servoMinAngle = new QLabel(gb_settings);
        l_servoMinAngle->setObjectName(QString::fromUtf8("l_servoMinAngle"));
        sizePolicy4.setHeightForWidth(l_servoMinAngle->sizePolicy().hasHeightForWidth());
        l_servoMinAngle->setSizePolicy(sizePolicy4);
        l_servoMinAngle->setMaximumSize(QSize(8888, 16777215));
        l_servoMinAngle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_servoMinAngle, 7, 0, 1, 1);

        le_overtime = new QLineEdit(gb_settings);
        le_overtime->setObjectName(QString::fromUtf8("le_overtime"));
        sizePolicy6.setHeightForWidth(le_overtime->sizePolicy().hasHeightForWidth());
        le_overtime->setSizePolicy(sizePolicy6);
        le_overtime->setMaximumSize(QSize(45, 16777215));
        le_overtime->setMaxLength(5);

        gridLayout_2->addWidget(le_overtime, 5, 1, 1, 1);

        l_EndByCurrent = new QLabel(gb_settings);
        l_EndByCurrent->setObjectName(QString::fromUtf8("l_EndByCurrent"));
        sizePolicy7.setHeightForWidth(l_EndByCurrent->sizePolicy().hasHeightForWidth());
        l_EndByCurrent->setSizePolicy(sizePolicy7);
        l_EndByCurrent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_EndByCurrent, 0, 2, 1, 1);

        le_PressingTime = new QLineEdit(gb_settings);
        le_PressingTime->setObjectName(QString::fromUtf8("le_PressingTime"));
        sizePolicy6.setHeightForWidth(le_PressingTime->sizePolicy().hasHeightForWidth());
        le_PressingTime->setSizePolicy(sizePolicy6);
        le_PressingTime->setMaximumSize(QSize(45, 16777215));
        le_PressingTime->setMaxLength(5);

        gridLayout_2->addWidget(le_PressingTime, 2, 1, 1, 1);

        l_overheating = new QLabel(gb_settings);
        l_overheating->setObjectName(QString::fromUtf8("l_overheating"));
        sizePolicy4.setHeightForWidth(l_overheating->sizePolicy().hasHeightForWidth());
        l_overheating->setSizePolicy(sizePolicy4);
        l_overheating->setMaximumSize(QSize(8888, 16777215));
        l_overheating->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_overheating, 4, 0, 1, 1);

        l_overiteration = new QLabel(gb_settings);
        l_overiteration->setObjectName(QString::fromUtf8("l_overiteration"));
        sizePolicy4.setHeightForWidth(l_overiteration->sizePolicy().hasHeightForWidth());
        l_overiteration->setSizePolicy(sizePolicy4);
        l_overiteration->setMaximumSize(QSize(8888, 16777215));
        l_overiteration->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_overiteration, 6, 0, 1, 1);

        le_maxOvertimes = new QLineEdit(gb_settings);
        le_maxOvertimes->setObjectName(QString::fromUtf8("le_maxOvertimes"));
        sizePolicy6.setHeightForWidth(le_maxOvertimes->sizePolicy().hasHeightForWidth());
        le_maxOvertimes->setSizePolicy(sizePolicy6);
        le_maxOvertimes->setMaximumSize(QSize(45, 16777215));
        le_maxOvertimes->setMaxLength(5);

        gridLayout_2->addWidget(le_maxOvertimes, 6, 1, 1, 1);

        l_overiteration2 = new QLabel(gb_settings);
        l_overiteration2->setObjectName(QString::fromUtf8("l_overiteration2"));
        sizePolicy7.setHeightForWidth(l_overiteration2->sizePolicy().hasHeightForWidth());
        l_overiteration2->setSizePolicy(sizePolicy7);
        l_overiteration2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_overiteration2, 6, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rb_digitalServo = new QRadioButton(gb_settings);
        rb_digitalServo->setObjectName(QString::fromUtf8("rb_digitalServo"));
        rb_digitalServo->setChecked(false);

        horizontalLayout_4->addWidget(rb_digitalServo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        rb_analogServo = new QRadioButton(gb_settings);
        rb_analogServo->setObjectName(QString::fromUtf8("rb_analogServo"));
        rb_analogServo->setChecked(true);

        horizontalLayout_4->addWidget(rb_analogServo);


        verticalLayout_2->addLayout(horizontalLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pb_start = new QPushButton(gb_settings);
        pb_start->setObjectName(QString::fromUtf8("pb_start"));
        sizePolicy4.setHeightForWidth(pb_start->sizePolicy().hasHeightForWidth());
        pb_start->setSizePolicy(sizePolicy4);
        pb_start->setMaximumSize(QSize(145, 16777215));

        gridLayout_5->addWidget(pb_start, 2, 0, 1, 1);

        pb_pause = new QPushButton(gb_settings);
        pb_pause->setObjectName(QString::fromUtf8("pb_pause"));
        pb_pause->setEnabled(false);
        sizePolicy4.setHeightForWidth(pb_pause->sizePolicy().hasHeightForWidth());
        pb_pause->setSizePolicy(sizePolicy4);
        pb_pause->setMaximumSize(QSize(145, 16777215));
        pb_pause->setFlat(false);

        gridLayout_5->addWidget(pb_pause, 5, 0, 1, 1);

        pb_stop = new QPushButton(gb_settings);
        pb_stop->setObjectName(QString::fromUtf8("pb_stop"));
        pb_stop->setEnabled(false);
        sizePolicy4.setHeightForWidth(pb_stop->sizePolicy().hasHeightForWidth());
        pb_stop->setSizePolicy(sizePolicy4);
        pb_stop->setMaximumSize(QSize(145, 16777215));

        gridLayout_5->addWidget(pb_stop, 4, 0, 1, 1);

        sb_angle = new QSpinBox(gb_settings);
        sb_angle->setObjectName(QString::fromUtf8("sb_angle"));
        sizePolicy4.setHeightForWidth(sb_angle->sizePolicy().hasHeightForWidth());
        sb_angle->setSizePolicy(sizePolicy4);
        sb_angle->setMaximumSize(QSize(45, 16777215));
        sb_angle->setMaximum(359);

        gridLayout_5->addWidget(sb_angle, 2, 2, 1, 1);

        pb_decompress = new QPushButton(gb_settings);
        pb_decompress->setObjectName(QString::fromUtf8("pb_decompress"));
        sizePolicy4.setHeightForWidth(pb_decompress->sizePolicy().hasHeightForWidth());
        pb_decompress->setSizePolicy(sizePolicy4);
        pb_decompress->setMaximumSize(QSize(145, 16777215));

        gridLayout_5->addWidget(pb_decompress, 5, 1, 1, 1);

        pb_compress = new QPushButton(gb_settings);
        pb_compress->setObjectName(QString::fromUtf8("pb_compress"));
        sizePolicy4.setHeightForWidth(pb_compress->sizePolicy().hasHeightForWidth());
        pb_compress->setSizePolicy(sizePolicy4);
        pb_compress->setMaximumSize(QSize(145, 16777215));

        gridLayout_5->addWidget(pb_compress, 4, 1, 1, 1);

        l_degrees = new QLabel(gb_settings);
        l_degrees->setObjectName(QString::fromUtf8("l_degrees"));
        sizePolicy6.setHeightForWidth(l_degrees->sizePolicy().hasHeightForWidth());
        l_degrees->setSizePolicy(sizePolicy6);
        l_degrees->setMaximumSize(QSize(12, 16777215));
        l_degrees->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(l_degrees, 2, 3, 1, 1);

        pb_setAngle = new QPushButton(gb_settings);
        pb_setAngle->setObjectName(QString::fromUtf8("pb_setAngle"));
        sizePolicy4.setHeightForWidth(pb_setAngle->sizePolicy().hasHeightForWidth());
        pb_setAngle->setSizePolicy(sizePolicy4);
        pb_setAngle->setMaximumSize(QSize(145, 16777215));
        pb_setAngle->setLayoutDirection(Qt::LeftToRight);

        gridLayout_5->addWidget(pb_setAngle, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_3->addWidget(gb_settings);

        gb_calibrate = new QGroupBox(tab);
        gb_calibrate->setObjectName(QString::fromUtf8("gb_calibrate"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(gb_calibrate->sizePolicy().hasHeightForWidth());
        gb_calibrate->setSizePolicy(sizePolicy8);
        gb_calibrate->setMinimumSize(QSize(405, 120));
        gb_calibrate->setMaximumSize(QSize(405, 16777215));
        gridLayout = new QGridLayout(gb_calibrate);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pb_startCal = new QPushButton(gb_calibrate);
        pb_startCal->setObjectName(QString::fromUtf8("pb_startCal"));

        gridLayout->addWidget(pb_startCal, 1, 0, 1, 1);

        pb_clearCal = new QPushButton(gb_calibrate);
        pb_clearCal->setObjectName(QString::fromUtf8("pb_clearCal"));
        pb_clearCal->setEnabled(true);

        gridLayout->addWidget(pb_clearCal, 2, 0, 1, 1);

        pb_CalWeightWrite = new QPushButton(gb_calibrate);
        pb_CalWeightWrite->setObjectName(QString::fromUtf8("pb_CalWeightWrite"));
        pb_CalWeightWrite->setEnabled(false);

        gridLayout->addWidget(pb_CalWeightWrite, 2, 1, 1, 1);

        le_calibrationWeight = new QLineEdit(gb_calibrate);
        le_calibrationWeight->setObjectName(QString::fromUtf8("le_calibrationWeight"));
        le_calibrationWeight->setEnabled(false);
        sizePolicy6.setHeightForWidth(le_calibrationWeight->sizePolicy().hasHeightForWidth());
        le_calibrationWeight->setSizePolicy(sizePolicy6);
        le_calibrationWeight->setMaximumSize(QSize(45, 16777215));
        le_calibrationWeight->setMaxLength(5);

        gridLayout->addWidget(le_calibrationWeight, 2, 2, 1, 1);

        l_calibrationWeight = new QLabel(gb_calibrate);
        l_calibrationWeight->setObjectName(QString::fromUtf8("l_calibrationWeight"));
        sizePolicy7.setHeightForWidth(l_calibrationWeight->sizePolicy().hasHeightForWidth());
        l_calibrationWeight->setSizePolicy(sizePolicy7);
        l_calibrationWeight->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(l_calibrationWeight, 2, 3, 1, 1);

        pb_cancelCal = new QPushButton(gb_calibrate);
        pb_cancelCal->setObjectName(QString::fromUtf8("pb_cancelCal"));
        pb_cancelCal->setEnabled(false);

        gridLayout->addWidget(pb_cancelCal, 1, 1, 1, 1);


        verticalLayout_3->addWidget(gb_calibrate);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gb_plots = new QGroupBox(tab);
        gb_plots->setObjectName(QString::fromUtf8("gb_plots"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(gb_plots->sizePolicy().hasHeightForWidth());
        gb_plots->setSizePolicy(sizePolicy9);
        gb_plots->setMinimumSize(QSize(50, 50));
        gb_plots->setMaximumSize(QSize(16777215, 16777215));
        gb_plots->setFlat(false);
        gb_plots->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(gb_plots);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        verticalLayout_6->addWidget(gb_plots);

        gb_stats = new QGroupBox(tab);
        gb_stats->setObjectName(QString::fromUtf8("gb_stats"));
        sizePolicy9.setHeightForWidth(gb_stats->sizePolicy().hasHeightForWidth());
        gb_stats->setSizePolicy(sizePolicy9);
        gb_stats->setMinimumSize(QSize(50, 240));
        gb_stats->setMaximumSize(QSize(16777215, 240));
        gridLayout_4 = new QGridLayout(gb_stats);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        l_peakcurrent = new QLabel(gb_stats);
        l_peakcurrent->setObjectName(QString::fromUtf8("l_peakcurrent"));
        sizePolicy9.setHeightForWidth(l_peakcurrent->sizePolicy().hasHeightForWidth());
        l_peakcurrent->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_peakcurrent, 6, 0, 1, 1);

        l_globalstate = new QLabel(gb_stats);
        l_globalstate->setObjectName(QString::fromUtf8("l_globalstate"));
        sizePolicy9.setHeightForWidth(l_globalstate->sizePolicy().hasHeightForWidth());
        l_globalstate->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_globalstate, 0, 0, 1, 1);

        label_26 = new QLabel(gb_stats);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        QSizePolicy sizePolicy10(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy10);
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_26, 6, 1, 1, 1);

        label_35 = new QLabel(gb_stats);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        sizePolicy10.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy10);
        label_35->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_35, 7, 4, 1, 1);

        l_noise = new QLabel(gb_stats);
        l_noise->setObjectName(QString::fromUtf8("l_noise"));
        sizePolicy9.setHeightForWidth(l_noise->sizePolicy().hasHeightForWidth());
        l_noise->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_noise, 5, 0, 1, 1);

        l_voltage = new QLabel(gb_stats);
        l_voltage->setObjectName(QString::fromUtf8("l_voltage"));
        sizePolicy9.setHeightForWidth(l_voltage->sizePolicy().hasHeightForWidth());
        l_voltage->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_voltage, 1, 0, 1, 1);

        l_peakcurrentmean = new QLabel(gb_stats);
        l_peakcurrentmean->setObjectName(QString::fromUtf8("l_peakcurrentmean"));
        sizePolicy9.setHeightForWidth(l_peakcurrentmean->sizePolicy().hasHeightForWidth());
        l_peakcurrentmean->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_peakcurrentmean, 7, 0, 1, 1);

        label_27 = new QLabel(gb_stats);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        sizePolicy10.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy10);
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_27, 7, 1, 1, 1);

        label_25 = new QLabel(gb_stats);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy10.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy10);
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_25, 5, 1, 1, 1);

        l_force = new QLabel(gb_stats);
        l_force->setObjectName(QString::fromUtf8("l_force"));
        sizePolicy9.setHeightForWidth(l_force->sizePolicy().hasHeightForWidth());
        l_force->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_force, 4, 0, 1, 1);

        label_2 = new QLabel(gb_stats);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy10.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy10);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        l_freecurrent = new QLabel(gb_stats);
        l_freecurrent->setObjectName(QString::fromUtf8("l_freecurrent"));
        sizePolicy9.setHeightForWidth(l_freecurrent->sizePolicy().hasHeightForWidth());
        l_freecurrent->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_freecurrent, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 16, 0, 1, 1);

        label_33 = new QLabel(gb_stats);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy10.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy10);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_33, 5, 4, 1, 1);

        l_motortemp = new QLabel(gb_stats);
        l_motortemp->setObjectName(QString::fromUtf8("l_motortemp"));
        sizePolicy9.setHeightForWidth(l_motortemp->sizePolicy().hasHeightForWidth());
        l_motortemp->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_motortemp, 3, 0, 1, 1);

        label_31 = new QLabel(gb_stats);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy10.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy10);
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_31, 3, 4, 1, 1);

        label_29 = new QLabel(gb_stats);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        sizePolicy10.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy10);
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_29, 1, 4, 1, 1);

        l_worktime = new QLabel(gb_stats);
        l_worktime->setObjectName(QString::fromUtf8("l_worktime"));
        sizePolicy9.setHeightForWidth(l_worktime->sizePolicy().hasHeightForWidth());
        l_worktime->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_worktime, 6, 3, 1, 1);

        label_23 = new QLabel(gb_stats);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy10.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy10);
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_23, 3, 1, 1, 1);

        l_meancycletime = new QLabel(gb_stats);
        l_meancycletime->setObjectName(QString::fromUtf8("l_meancycletime"));
        sizePolicy9.setHeightForWidth(l_meancycletime->sizePolicy().hasHeightForWidth());
        l_meancycletime->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_meancycletime, 5, 3, 1, 1);

        l_cyclescurrent = new QLabel(gb_stats);
        l_cyclescurrent->setObjectName(QString::fromUtf8("l_cyclescurrent"));
        sizePolicy9.setHeightForWidth(l_cyclescurrent->sizePolicy().hasHeightForWidth());
        l_cyclescurrent->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_cyclescurrent, 2, 3, 1, 1);

        l_workendtime = new QLabel(gb_stats);
        l_workendtime->setObjectName(QString::fromUtf8("l_workendtime"));
        sizePolicy9.setHeightForWidth(l_workendtime->sizePolicy().hasHeightForWidth());
        l_workendtime->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_workendtime, 7, 3, 1, 1);

        label_32 = new QLabel(gb_stats);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy10.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy10);
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_32, 4, 4, 1, 1);

        l_current = new QLabel(gb_stats);
        l_current->setObjectName(QString::fromUtf8("l_current"));
        sizePolicy9.setHeightForWidth(l_current->sizePolicy().hasHeightForWidth());
        l_current->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_current, 2, 0, 1, 1);

        l_loadcurrent = new QLabel(gb_stats);
        l_loadcurrent->setObjectName(QString::fromUtf8("l_loadcurrent"));
        sizePolicy9.setHeightForWidth(l_loadcurrent->sizePolicy().hasHeightForWidth());
        l_loadcurrent->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_loadcurrent, 1, 3, 1, 1);

        label_34 = new QLabel(gb_stats);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy10.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy10);
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_34, 6, 4, 1, 1);

        label_24 = new QLabel(gb_stats);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy10.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy10);
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_24, 4, 1, 1, 1);

        label_21 = new QLabel(gb_stats);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy10.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy10);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_21, 1, 1, 1, 1);

        label_22 = new QLabel(gb_stats);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy10.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy10);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_22, 2, 1, 1, 1);

        label_30 = new QLabel(gb_stats);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        sizePolicy10.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy10);
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_30, 2, 4, 1, 1);

        label_28 = new QLabel(gb_stats);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        sizePolicy10.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy10);
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_28, 0, 4, 1, 1);

        l_cycleselapsed = new QLabel(gb_stats);
        l_cycleselapsed->setObjectName(QString::fromUtf8("l_cycleselapsed"));
        sizePolicy9.setHeightForWidth(l_cycleselapsed->sizePolicy().hasHeightForWidth());
        l_cycleselapsed->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_cycleselapsed, 3, 3, 1, 1);

        l_lastcycletime = new QLabel(gb_stats);
        l_lastcycletime->setObjectName(QString::fromUtf8("l_lastcycletime"));
        sizePolicy9.setHeightForWidth(l_lastcycletime->sizePolicy().hasHeightForWidth());
        l_lastcycletime->setSizePolicy(sizePolicy9);

        gridLayout_4->addWidget(l_lastcycletime, 4, 3, 1, 1);


        verticalLayout_6->addWidget(gb_stats);


        horizontalLayout->addLayout(verticalLayout_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        sizePolicy1.setHeightForWidth(tab_2->sizePolicy().hasHeightForWidth());
        tab_2->setSizePolicy(sizePolicy1);
        pb_openLogfile = new QPushButton(tab_2);
        pb_openLogfile->setObjectName(QString::fromUtf8("pb_openLogfile"));
        pb_openLogfile->setGeometry(QRect(10, 10, 181, 25));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 161, 16));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        le_prosthesisId2 = new QLineEdit(tab_2);
        le_prosthesisId2->setObjectName(QString::fromUtf8("le_prosthesisId2"));
        le_prosthesisId2->setGeometry(QRect(10, 70, 181, 24));
        sizePolicy4.setHeightForWidth(le_prosthesisId2->sizePolicy().hasHeightForWidth());
        le_prosthesisId2->setSizePolicy(sizePolicy4);
        le_prosthesisId2->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        viewfinder = new QCameraViewfinder(tab_3);
        viewfinder->setObjectName(QString::fromUtf8("viewfinder"));

        verticalLayout_5->addWidget(viewfinder);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1109, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gb_settings->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\201\320\265\321\201\321\201\320\270\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\206\320\270\320\272\320\273\320\276\320\262 \321\201\320\265\321\201\321\201\320\270\320\270:", nullptr));
        le_sessionCycles->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID \320\277\321\200\320\276\321\202\320\265\320\267\320\260:", nullptr));
        cb_Mode->setItemText(0, QCoreApplication::translate("MainWindow", "DC \320\274\320\276\321\202\320\276\321\200", nullptr));
        cb_Mode->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\320\265\321\200\320\262\320\276\320\274\320\260\321\210\320\270\320\275\320\272\320\260", nullptr));
        cb_Mode->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\202\320\265\320\267 \320\262 \321\201\320\261\320\276\321\200\320\265", nullptr));

        cb_EndByForce->setText(QCoreApplication::translate("MainWindow", "\320\250\321\202\320\260\321\202\320\275\320\276\320\265 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\320\265 \321\206\320\270\320\272\320\273\320\260 \320\277\320\276 \321\203\321\201\320\270\320\273\320\270\321\216:", nullptr));
        le_pauseTime->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        l_PressingTime->setText(QCoreApplication::translate("MainWindow", "\321\201", nullptr));
        le_servoMinAngle->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_pauseTime->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\320\260\321\203\320\267\321\213/\320\276\321\205\320\273\320\260\320\266\320\264\320\265\320\275\320\270\321\217:", nullptr));
        l_servoMaxAngle2->setText(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        l_pauseTime2->setText(QCoreApplication::translate("MainWindow", "\321\201", nullptr));
        l_overtime->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\320\260\321\200. \320\276\321\202\320\272\320\273. \320\277\321\200\320\270 \320\277\321\200\320\265\320\262\321\213\321\210\320\265\320\275\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \321\206\320\270\320\272\320\273\320\260:", nullptr));
        le_overheating->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        le_EndByCurrent->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        cb_PressingTime->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\266\320\260\321\202\320\270\321\217/\321\200\320\260\320\267\320\266\320\260\321\202\320\270\321\217:", nullptr));
        le_EndByForce->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        cb_EndByCurrent->setText(QCoreApplication::translate("MainWindow", "\320\250\321\202\320\260\321\202\320\275\320\276\320\265 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\320\265 \321\206\320\270\320\272\320\273\320\260 \320\277\320\276 \321\202\320\276\320\272\321\203:", nullptr));
        l_overheating2->setText(QCoreApplication::translate("MainWindow", "\302\260\320\241", nullptr));
        le_servoMaxAngle->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_servoMinAngle2->setText(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        l_overtime2->setText(QCoreApplication::translate("MainWindow", "\321\201", nullptr));
        l_servoMaxAngle->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\203\320\263\320\276\320\273 \321\201\320\265\321\200\320\262\320\276\320\274\320\260\321\210\320\270\320\275\320\272\320\270:", nullptr));
        l_EndByForce->setText(QCoreApplication::translate("MainWindow", "\320\272\320\263", nullptr));
        l_servoMinAngle->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\203\320\263\320\276\320\273 \321\201\320\265\321\200\320\262\320\276\320\274\320\260\321\210\320\270\320\275\320\272\320\270:", nullptr));
        le_overtime->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        l_EndByCurrent->setText(QCoreApplication::translate("MainWindow", "\320\220", nullptr));
        le_PressingTime->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        l_overheating->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\320\260\321\200. \320\276\321\202\320\272\320\273. \320\277\321\200\320\270 \320\277\321\200\320\265\320\262\321\213\321\210\320\265\320\275\320\270\320\270 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\321\213:", nullptr));
        l_overiteration->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\320\260\321\200. \320\276\321\202\320\272\320\273. \320\277\321\200\320\270 \320\277\321\200\320\265\320\262\321\213\321\210\320\265\320\275\320\270\320\270 \320\272\320\276\320\273-\320\262\320\260 \320\270\321\202\320\265\321\200\320\260\321\206\320\270\320\271:", nullptr));
        le_maxOvertimes->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        l_overiteration2->setText(QCoreApplication::translate("MainWindow", "\320\265\320\264", nullptr));
        rb_digitalServo->setText(QCoreApplication::translate("MainWindow", "\320\246\320\270\321\204\321\200\320\276\320\262\320\260\321\217 \321\201\320\265\321\200\320\262\320\276\320\274\320\260\321\210\320\270\320\275\320\272\320\260", nullptr));
        rb_analogServo->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\320\265\321\200\320\262\320\276\320\274\320\260\321\210\320\270\320\275\320\272\320\260", nullptr));
        pb_start->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        pb_pause->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\203\320\267\320\260", nullptr));
        pb_stop->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", nullptr));
        pb_decompress->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\266\320\260\321\202\321\214", nullptr));
        pb_compress->setText(QCoreApplication::translate("MainWindow", "\320\241\320\266\320\260\321\202\321\214", nullptr));
        l_degrees->setText(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        pb_setAngle->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\262 \321\203\320\263\320\276\320\273", nullptr));
        gb_calibrate->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\270\320\261\321\200\320\276\320\262\320\272\320\260 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262", nullptr));
        pb_startCal->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272", nullptr));
        pb_clearCal->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        pb_CalWeightWrite->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        le_calibrationWeight->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_calibrationWeight->setText(QCoreApplication::translate("MainWindow", "\320\272\320\263", nullptr));
        pb_cancelCal->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        gb_plots->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270", nullptr));
        gb_stats->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        l_peakcurrent->setText(QCoreApplication::translate("MainWindow", "\320\237\320\270\320\272\320\276\320\262\321\213\320\271 \321\202\320\276\320\272 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\263\320\276 \321\206\320\270\320\272\320\273\320\260:", nullptr));
        l_globalstate->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265:", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_noise->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\210\321\203\320\274\320\260:", nullptr));
        l_voltage->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 \320\275\320\260\320\263\321\200\321\203\320\267\320\272\320\270:", nullptr));
        l_peakcurrentmean->setText(QCoreApplication::translate("MainWindow", "\320\237\320\270\320\272\320\276\320\262\321\213\320\271 \321\202\320\276\320\272 \321\201\321\200\320\265\320\264\320\275\320\270\320\271:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_force->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\320\270\320\273\320\270\320\265 \320\275\320\260 \321\202\320\265\320\275\320\267\320\276\320\264\320\260\321\202\321\207\320\270\320\272\320\265:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\320\260\320\272\321\202\320\270\320\262\320\265\320\275", nullptr));
        l_freecurrent->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\272 \321\205\320\276\320\273\320\276\321\201\321\202\320\276\320\263\320\276 \321\205\320\276\320\264\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\263\320\276 \321\206\320\270\320\272\320\273\320\260:", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_motortemp->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\274\320\276\321\202\320\276\321\200\320\260:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_worktime->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_meancycletime->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \321\206\320\270\320\272\320\273\320\260:", nullptr));
        l_cyclescurrent->setText(QCoreApplication::translate("MainWindow", "\320\246\320\270\320\272\320\273\320\276\320\262 \320\277\321\200\320\276\320\271\320\264\320\265\320\275\320\276:", nullptr));
        l_workendtime->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_current->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\272 \320\275\320\260\320\263\321\200\321\203\320\267\320\272\320\270:", nullptr));
        l_loadcurrent->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\321\211\320\275\320\276\321\201\321\202\321\214 \320\275\320\260\320\263\321\200\321\203\320\267\320\272\320\270 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\271 \321\206\320\270\320\272\320\273:", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        l_cycleselapsed->setText(QCoreApplication::translate("MainWindow", "\320\246\320\270\320\272\320\273\320\276\320\262 \320\276\321\201\321\202\320\260\320\273\320\276\321\201\321\214:", nullptr));
        l_lastcycletime->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\263\320\276 \321\206\320\270\320\272\320\273\320\260:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pb_openLogfile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273...", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ID \320\277\321\200\320\276\321\202\320\265\320\267\320\260:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\270 \321\202\320\265\321\201\321\202\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\235\320\260\320\261\320\273\321\216\320\264\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
