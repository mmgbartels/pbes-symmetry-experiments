/****************************************************************************
** Meta object code from reading C++ file 'attribute.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../attribute.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attribute.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Attribute_t {
    const uint offsetsAndSize[16];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Attribute_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Attribute_t qt_meta_stringdata_Attribute = {
    {
QT_MOC_LITERAL(0, 9), // "Attribute"
QT_MOC_LITERAL(10, 7), // "changed"
QT_MOC_LITERAL(18, 0), // ""
QT_MOC_LITERAL(19, 10), // "duplicated"
QT_MOC_LITERAL(30, 7), // "renamed"
QT_MOC_LITERAL(38, 7), // "deleted"
QT_MOC_LITERAL(46, 5), // "moved"
QT_MOC_LITERAL(52, 11) // "newPosition"

    },
    "Attribute\0changed\0\0duplicated\0renamed\0"
    "deleted\0moved\0newPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Attribute[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,
       5,    0,   47,    2, 0x06,    4 /* Public */,
       6,    1,   48,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void Attribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Attribute *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->duplicated(); break;
        case 2: _t->renamed(); break;
        case 3: _t->deleted(); break;
        case 4: _t->moved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Attribute::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attribute::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Attribute::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attribute::duplicated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Attribute::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attribute::renamed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Attribute::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attribute::deleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Attribute::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attribute::moved)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Attribute::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Attribute.offsetsAndSize,
    qt_meta_data_Attribute,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Attribute_t
, QtPrivate::TypeAndForceComplete<Attribute, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *Attribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Attribute::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Attribute.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Attribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Attribute::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Attribute::duplicated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Attribute::renamed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Attribute::deleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Attribute::moved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
