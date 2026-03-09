/****************************************************************************
** Meta object code from reading C++ file 'simulation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../simulation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Simulation_t {
    const uint offsetsAndSize[44];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Simulation_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Simulation_t qt_meta_stringdata_Simulation = {
    {
QT_MOC_LITERAL(0, 10), // "Simulation"
QT_MOC_LITERAL(11, 18), // "initialisationDone"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 8), // "finished"
QT_MOC_LITERAL(40, 4), // "init"
QT_MOC_LITERAL(45, 8), // "filename"
QT_MOC_LITERAL(54, 18), // "do_not_use_dummies"
QT_MOC_LITERAL(73, 11), // "updateTrace"
QT_MOC_LITERAL(85, 17), // "firstChangedState"
QT_MOC_LITERAL(103, 5), // "reset"
QT_MOC_LITERAL(109, 11), // "stateNumber"
QT_MOC_LITERAL(121, 13), // "probabilistic"
QT_MOC_LITERAL(135, 6), // "select"
QT_MOC_LITERAL(142, 16), // "transitionNumber"
QT_MOC_LITERAL(159, 14), // "selected_state"
QT_MOC_LITERAL(174, 11), // "QSemaphore*"
QT_MOC_LITERAL(186, 9), // "semaphore"
QT_MOC_LITERAL(196, 32), // "auto_select_state_or_probability"
QT_MOC_LITERAL(229, 30), // "enable_auto_select_probability"
QT_MOC_LITERAL(260, 6), // "enable"
QT_MOC_LITERAL(267, 4), // "load"
QT_MOC_LITERAL(272, 4) // "save"

    },
    "Simulation\0initialisationDone\0\0finished\0"
    "init\0filename\0do_not_use_dummies\0"
    "updateTrace\0firstChangedState\0reset\0"
    "stateNumber\0probabilistic\0select\0"
    "transitionNumber\0selected_state\0"
    "QSemaphore*\0semaphore\0"
    "auto_select_state_or_probability\0"
    "enable_auto_select_probability\0enable\0"
    "load\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Simulation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   76,    2, 0x08,    3 /* Private */,
       7,    1,   81,    2, 0x08,    6 /* Private */,
       9,    2,   84,    2, 0x0a,    8 /* Public */,
      12,    3,   89,    2, 0x0a,   11 /* Public */,
      17,    2,   96,    2, 0x0a,   15 /* Public */,
      18,    2,  101,    2, 0x0a,   18 /* Public */,
      20,    1,  106,    2, 0x0a,   21 /* Public */,
      21,    1,  109,    2, 0x0a,   23 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::ULongLong,    8,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Bool,   10,   11,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong, 0x80000000 | 15,   13,   14,   16,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 15,   14,   16,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 15,   19,   16,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Simulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initialisationDone(); break;
        case 1: _t->finished(); break;
        case 2: _t->init((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->updateTrace((*reinterpret_cast< std::add_pointer_t<qulonglong>>(_a[1]))); break;
        case 4: _t->reset((*reinterpret_cast< std::add_pointer_t<qulonglong>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->select((*reinterpret_cast< std::add_pointer_t<qulonglong>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qulonglong>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSemaphore*>>(_a[3]))); break;
        case 6: _t->auto_select_state_or_probability((*reinterpret_cast< std::add_pointer_t<qulonglong>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSemaphore*>>(_a[2]))); break;
        case 7: _t->enable_auto_select_probability((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSemaphore*>>(_a[2]))); break;
        case 8: _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->save((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Simulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulation::initialisationDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulation::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Simulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Simulation.offsetsAndSize,
    qt_meta_data_Simulation,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Simulation_t
, QtPrivate::TypeAndForceComplete<Simulation, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long long, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long long, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long long, std::false_type>, QtPrivate::TypeAndForceComplete<QSemaphore *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long long, std::false_type>, QtPrivate::TypeAndForceComplete<QSemaphore *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QSemaphore *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *Simulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Simulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Simulation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Simulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Simulation::initialisationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Simulation::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
