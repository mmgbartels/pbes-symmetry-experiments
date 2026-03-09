/****************************************************************************
** Meta object code from reading C++ file 'visualizer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../visualizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visualizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Visualizer_t {
    const uint offsetsAndSize[24];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Visualizer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Visualizer_t qt_meta_stringdata_Visualizer = {
    {
QT_MOC_LITERAL(0, 10), // "Visualizer"
QT_MOC_LITERAL(11, 7), // "dirtied"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 16), // "setClusterHeight"
QT_MOC_LITERAL(37, 17), // "branchTiltChanged"
QT_MOC_LITERAL(55, 5), // "value"
QT_MOC_LITERAL(61, 12), // "dirtyObjects"
QT_MOC_LITERAL(74, 13), // "dirtyMatrices"
QT_MOC_LITERAL(88, 14), // "dirtyPositions"
QT_MOC_LITERAL(103, 11), // "dirtyColors"
QT_MOC_LITERAL(115, 15), // "dirtyColorsMark"
QT_MOC_LITERAL(131, 17) // "dirtyColorsNoMark"

    },
    "Visualizer\0dirtied\0\0setClusterHeight\0"
    "branchTiltChanged\0value\0dirtyObjects\0"
    "dirtyMatrices\0dirtyPositions\0dirtyColors\0"
    "dirtyColorsMark\0dirtyColorsNoMark"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Visualizer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    1,   70,    2, 0x0a,    3 /* Public */,
       6,    0,   73,    2, 0x0a,    5 /* Public */,
       7,    0,   74,    2, 0x0a,    6 /* Public */,
       8,    0,   75,    2, 0x0a,    7 /* Public */,
       9,    0,   76,    2, 0x0a,    8 /* Public */,
      10,    0,   77,    2, 0x0a,    9 /* Public */,
      11,    0,   78,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Visualizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Visualizer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dirtied(); break;
        case 1: _t->setClusterHeight(); break;
        case 2: _t->branchTiltChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->dirtyObjects(); break;
        case 4: _t->dirtyMatrices(); break;
        case 5: _t->dirtyPositions(); break;
        case 6: _t->dirtyColors(); break;
        case 7: _t->dirtyColorsMark(); break;
        case 8: _t->dirtyColorsNoMark(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Visualizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Visualizer::dirtied)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Visualizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Visualizer.offsetsAndSize,
    qt_meta_data_Visualizer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Visualizer_t
, QtPrivate::TypeAndForceComplete<Visualizer, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Visualizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Visualizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Visualizer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Visualizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Visualizer::dirtied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
