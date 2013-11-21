/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[13];
    char stringdata[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 35),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 5),
QT_MOC_LITERAL(4, 54, 23),
QT_MOC_LITERAL(5, 78, 36),
QT_MOC_LITERAL(6, 115, 23),
QT_MOC_LITERAL(7, 139, 28),
QT_MOC_LITERAL(8, 168, 16),
QT_MOC_LITERAL(9, 185, 33),
QT_MOC_LITERAL(10, 219, 33),
QT_MOC_LITERAL(11, 253, 32),
QT_MOC_LITERAL(12, 286, 27)
    },
    "MainWindow\0on_horizontalScrollBar_valueChanged\0"
    "\0value\0on_actionExit_triggered\0"
    "on_actionAdd_Textanimation_triggered\0"
    "on_spinBox_valueChanged\0"
    "on_commandLinkButton_clicked\0"
    "vUpdateAnimation\0on_actionOpen_Animation_triggered\0"
    "on_actionSave_Animation_triggered\0"
    "on_actionNew_Animation_triggered\0"
    "on_actionAdd_Word_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08,
       4,    0,   67,    2, 0x08,
       5,    0,   68,    2, 0x08,
       6,    1,   69,    2, 0x08,
       7,    0,   72,    2, 0x08,
       8,    0,   73,    2, 0x08,
       9,    0,   74,    2, 0x08,
      10,    0,   75,    2, 0x08,
      11,    0,   76,    2, 0x08,
      12,    0,   77,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_horizontalScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_actionExit_triggered(); break;
        case 2: _t->on_actionAdd_Textanimation_triggered(); break;
        case 3: _t->on_spinBox_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_commandLinkButton_clicked(); break;
        case 5: _t->vUpdateAnimation(); break;
        case 6: _t->on_actionOpen_Animation_triggered(); break;
        case 7: _t->on_actionSave_Animation_triggered(); break;
        case 8: _t->on_actionNew_Animation_triggered(); break;
        case 9: _t->on_actionAdd_Word_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
