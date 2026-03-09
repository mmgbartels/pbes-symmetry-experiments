/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[54];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 17), // "openSpecification"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 9), // "loadTrace"
QT_MOC_LITERAL(40, 9), // "saveTrace"
QT_MOC_LITERAL(50, 9), // "playTrace"
QT_MOC_LITERAL(60, 10), // "randomPlay"
QT_MOC_LITERAL(71, 8), // "stopPlay"
QT_MOC_LITERAL(80, 12), // "setPlayDelay"
QT_MOC_LITERAL(93, 16), // "updateSimulation"
QT_MOC_LITERAL(110, 13), // "stateSelected"
QT_MOC_LITERAL(124, 24), // "setAutoSelectProbability"
QT_MOC_LITERAL(149, 8), // "filename"
QT_MOC_LITERAL(158, 23), // "onInitializedSimulation"
QT_MOC_LITERAL(182, 11), // "selectState"
QT_MOC_LITERAL(194, 5), // "state"
QT_MOC_LITERAL(200, 13), // "truncateTrace"
QT_MOC_LITERAL(214, 16), // "column_on_screen"
QT_MOC_LITERAL(231, 16), // "selectTransition"
QT_MOC_LITERAL(248, 10), // "transition"
QT_MOC_LITERAL(259, 13), // "animationStep"
QT_MOC_LITERAL(273, 8), // "undoLast"
QT_MOC_LITERAL(282, 11), // "onLogOutput"
QT_MOC_LITERAL(294, 5), // "level"
QT_MOC_LITERAL(300, 9), // "timestamp"
QT_MOC_LITERAL(310, 7), // "message"
QT_MOC_LITERAL(318, 16) // "formattedMessage"

    },
    "MainWindow\0openSpecification\0\0loadTrace\0"
    "saveTrace\0playTrace\0randomPlay\0stopPlay\0"
    "setPlayDelay\0updateSimulation\0"
    "stateSelected\0setAutoSelectProbability\0"
    "filename\0onInitializedSimulation\0"
    "selectState\0state\0truncateTrace\0"
    "column_on_screen\0selectTransition\0"
    "transition\0animationStep\0undoLast\0"
    "onLogOutput\0level\0timestamp\0message\0"
    "formattedMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x09,    1 /* Protected */,
       3,    0,  123,    2, 0x09,    2 /* Protected */,
       4,    0,  124,    2, 0x09,    3 /* Protected */,
       5,    0,  125,    2, 0x09,    4 /* Protected */,
       6,    0,  126,    2, 0x09,    5 /* Protected */,
       7,    0,  127,    2, 0x09,    6 /* Protected */,
       8,    0,  128,    2, 0x09,    7 /* Protected */,
       9,    0,  129,    2, 0x09,    8 /* Protected */,
      10,    0,  130,    2, 0x09,    9 /* Protected */,
      11,    0,  131,    2, 0x09,   10 /* Protected */,
       1,    1,  132,    2, 0x0a,   11 /* Public */,
      13,    0,  135,    2, 0x0a,   13 /* Public */,
      14,    1,  136,    2, 0x0a,   14 /* Public */,
      16,    2,  139,    2, 0x0a,   16 /* Public */,
      18,    1,  144,    2, 0x0a,   19 /* Public */,
      20,    0,  147,    2, 0x0a,   21 /* Public */,
      21,    0,  148,    2, 0x0a,   22 /* Public */,
      22,    4,  149,    2, 0x0a,   23 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString,   23,   24,   25,   26,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openSpecification(); break;
        case 1: _t->loadTrace(); break;
        case 2: _t->saveTrace(); break;
        case 3: _t->playTrace(); break;
        case 4: _t->randomPlay(); break;
        case 5: _t->stopPlay(); break;
        case 6: _t->setPlayDelay(); break;
        case 7: _t->updateSimulation(); break;
        case 8: _t->stateSelected(); break;
        case 9: _t->setAutoSelectProbability(); break;
        case 10: _t->openSpecification((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->onInitializedSimulation(); break;
        case 12: _t->selectState((*reinterpret_cast< std::add_pointer_t<qulonglong>>(_a[1]))); break;
        case 13: _t->truncateTrace((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->selectTransition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->animationStep(); break;
        case 16: _t->undoLast(); break;
        case 17: _t->onLogOutput((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
