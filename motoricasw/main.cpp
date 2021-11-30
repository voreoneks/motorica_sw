#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "hidapi.h"

int main(int argc, char *argv[])
{
    hid_init();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
