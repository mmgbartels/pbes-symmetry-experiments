/****************************************************************************
** Meta object code from reading C++ file 'simdock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../simdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimDock_t {
    const uint offsetsAndSize[22];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SimDock_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SimDock_t qt_meta_stringdata_SimDock = {
    {
QT_MOC_LITERAL(0, 7), // "SimDock"
QT_MOC_LITERAL(8, 7), // "changed"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 16), // "selectionChanged"
QT_MOC_LITERAL(34, 5), // "start"
QT_MOC_LITERAL(40, 4), // "stop"
QT_MOC_LITERAL(45, 9), // "backtrace"
QT_MOC_LITERAL(55, 5), // "reset"
QT_MOC_LITERAL(61, 7), // "trigger"
QT_MOC_LITERAL(69, 4), // "undo"
QT_MOC_LITERAL(74, 6) // "select"

    },
    "SimDock\0changed\0\0selectionChanged\0"
    "start\0stop\0backtrace\0reset\0trigger\0"
    "undo\0select"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimDock[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x09,    3 /* Protected */,
       5,    0,   71,    2, 0x09,    4 /* Protected */,
       6,    0,   72,    2, 0x09,    5 /* Protected */,
       7,    0,   73,    2, 0x09,    6 /* Protected */,
       8,    0,   74,    2, 0x09,    7 /* Protected */,
       9,    0,   75,    2, 0x09,    8 /* Protected */,
      10,    0,   76,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SimDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->backtrace(); break;
        case 5: _t->reset(); break;
        case 6: _t->trigger(); break;
        case 7: _t->undo(); break;
        case 8: _t->select(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject SimDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SimDock.offsetsAndSize,
    qt_meta_data_SimDock,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SimDock_t
, QtPrivate::TypeAndForceComplete<SimDock, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SimDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimDock.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SimDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
