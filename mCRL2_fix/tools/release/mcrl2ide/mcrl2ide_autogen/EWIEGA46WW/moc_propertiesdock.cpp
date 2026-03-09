/****************************************************************************
** Meta object code from reading C++ file 'propertiesdock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../propertiesdock.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertiesdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertiesDock_t {
    const uint offsetsAndSize[18];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PropertiesDock_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PropertiesDock_t qt_meta_stringdata_PropertiesDock = {
    {
QT_MOC_LITERAL(0, 14), // "PropertiesDock"
QT_MOC_LITERAL(15, 11), // "addProperty"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 8), // "Property"
QT_MOC_LITERAL(37, 8), // "property"
QT_MOC_LITERAL(46, 20), // "deletePropertyWidget"
QT_MOC_LITERAL(67, 15), // "PropertyWidget*"
QT_MOC_LITERAL(83, 14), // "propertyWidget"
QT_MOC_LITERAL(98, 23) // "resetAllPropertyWidgets"

    },
    "PropertiesDock\0addProperty\0\0Property\0"
    "property\0deletePropertyWidget\0"
    "PropertyWidget*\0propertyWidget\0"
    "resetAllPropertyWidgets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertiesDock[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       5,    1,   35,    2, 0x0a,    3 /* Public */,
       8,    0,   38,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void PropertiesDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertiesDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addProperty((*reinterpret_cast< std::add_pointer_t<Property>>(_a[1]))); break;
        case 1: _t->deletePropertyWidget((*reinterpret_cast< std::add_pointer_t<PropertyWidget*>>(_a[1]))); break;
        case 2: _t->resetAllPropertyWidgets(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PropertyWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PropertiesDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_PropertiesDock.offsetsAndSize,
    qt_meta_data_PropertiesDock,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PropertiesDock_t
, QtPrivate::TypeAndForceComplete<PropertiesDock, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Property &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<PropertyWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *PropertiesDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertiesDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertiesDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int PropertiesDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
