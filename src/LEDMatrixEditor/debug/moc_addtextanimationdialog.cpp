/****************************************************************************
** Meta object code from reading C++ file 'addtextanimationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addtextanimationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtextanimationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddTextAnimationDialog_t {
    QByteArrayData data[6];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddTextAnimationDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddTextAnimationDialog_t qt_meta_stringdata_AddTextAnimationDialog = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 30),
QT_MOC_LITERAL(2, 54, 0),
QT_MOC_LITERAL(3, 55, 5),
QT_MOC_LITERAL(4, 61, 32),
QT_MOC_LITERAL(5, 94, 21)
    },
    "AddTextAnimationDialog\0"
    "on_verticalSlider_valueChanged\0\0value\0"
    "on_verticalSlider_2_valueChanged\0"
    "on_buttonBox_accepted\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddTextAnimationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08,
       4,    1,   32,    2, 0x08,
       5,    0,   35,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void AddTextAnimationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddTextAnimationDialog *_t = static_cast<AddTextAnimationDialog *>(_o);
        switch (_id) {
        case 0: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_verticalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObject AddTextAnimationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddTextAnimationDialog.data,
      qt_meta_data_AddTextAnimationDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddTextAnimationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTextAnimationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddTextAnimationDialog.stringdata))
        return static_cast<void*>(const_cast< AddTextAnimationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddTextAnimationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
