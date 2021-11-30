/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../motoricasw/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "fileError"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 31), // "on_cb_EndByCurrent_stateChanged"
QT_MOC_LITERAL(4, 54, 4), // "arg1"
QT_MOC_LITERAL(5, 59, 29), // "on_cb_EndByForce_stateChanged"
QT_MOC_LITERAL(6, 89, 13), // "onTimerUpdate"
QT_MOC_LITERAL(7, 103, 19), // "on_pb_start_clicked"
QT_MOC_LITERAL(8, 123, 18), // "on_pb_stop_clicked"
QT_MOC_LITERAL(9, 142, 12), // "msgFileError"
QT_MOC_LITERAL(10, 155, 30), // "on_cb_Mode_currentIndexChanged"
QT_MOC_LITERAL(11, 186, 5), // "index"
QT_MOC_LITERAL(12, 192, 22), // "on_pb_startCal_clicked"
QT_MOC_LITERAL(13, 215, 23), // "on_pb_cancelCal_clicked"
QT_MOC_LITERAL(14, 239, 22), // "on_pb_compress_clicked"
QT_MOC_LITERAL(15, 262, 31), // "on_cb_PressingTime_stateChanged"
QT_MOC_LITERAL(16, 294, 22), // "on_pb_setAngle_clicked"
QT_MOC_LITERAL(17, 317, 24) // "on_pb_decompress_clicked"

    },
    "MainWindow\0fileError\0\0"
    "on_cb_EndByCurrent_stateChanged\0arg1\0"
    "on_cb_EndByForce_stateChanged\0"
    "onTimerUpdate\0on_pb_start_clicked\0"
    "on_pb_stop_clicked\0msgFileError\0"
    "on_cb_Mode_currentIndexChanged\0index\0"
    "on_pb_startCal_clicked\0on_pb_cancelCal_clicked\0"
    "on_pb_compress_clicked\0"
    "on_cb_PressingTime_stateChanged\0"
    "on_pb_setAngle_clicked\0on_pb_decompress_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   85,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       6,    0,   91,    2, 0x08 /* Private */,
       7,    0,   92,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    1,   95,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    1,  101,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileError(); break;
        case 1: _t->on_cb_EndByCurrent_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_cb_EndByForce_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onTimerUpdate(); break;
        case 4: _t->on_pb_start_clicked(); break;
        case 5: _t->on_pb_stop_clicked(); break;
        case 6: _t->msgFileError(); break;
        case 7: _t->on_cb_Mode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pb_startCal_clicked(); break;
        case 9: _t->on_pb_cancelCal_clicked(); break;
        case 10: _t->on_pb_compress_clicked(); break;
        case 11: _t->on_cb_PressingTime_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_pb_setAngle_clicked(); break;
        case 13: _t->on_pb_decompress_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::fileError)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::fileError()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
