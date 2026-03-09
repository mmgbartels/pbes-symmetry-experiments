/****************************************************************************
** Meta object code from reading C++ file 'setting.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/mcrl2/gui/setting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mcrl2__gui__qt__SettingInt_t {
    const uint offsetsAndSize[10];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingInt_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mcrl2__gui__qt__SettingInt_t qt_meta_stringdata_mcrl2__gui__qt__SettingInt = {
    {
QT_MOC_LITERAL(0, 26), // "mcrl2::gui::qt::SettingInt"
QT_MOC_LITERAL(27, 7), // "changed"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 5), // "value"
QT_MOC_LITERAL(42, 8) // "setValue"

    },
    "mcrl2::gui::qt::SettingInt\0changed\0\0"
    "value\0setValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingInt[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void mcrl2::gui::qt::SettingInt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingInt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingInt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingInt::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject mcrl2::gui::qt::SettingInt::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingInt.offsetsAndSize,
    qt_meta_data_mcrl2__gui__qt__SettingInt,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mcrl2__gui__qt__SettingInt_t
, QtPrivate::TypeAndForceComplete<SettingInt, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingInt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingInt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingInt.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingInt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mcrl2::gui::qt::SettingInt::changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__SettingBool_t {
    const uint offsetsAndSize[10];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingBool_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mcrl2__gui__qt__SettingBool_t qt_meta_stringdata_mcrl2__gui__qt__SettingBool = {
    {
QT_MOC_LITERAL(0, 27), // "mcrl2::gui::qt::SettingBool"
QT_MOC_LITERAL(28, 7), // "changed"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 5), // "value"
QT_MOC_LITERAL(43, 8) // "setValue"

    },
    "mcrl2::gui::qt::SettingBool\0changed\0"
    "\0value\0setValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingBool[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void mcrl2::gui::qt::SettingBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingBool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingBool::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingBool::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject mcrl2::gui::qt::SettingBool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingBool.offsetsAndSize,
    qt_meta_data_mcrl2__gui__qt__SettingBool,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mcrl2__gui__qt__SettingBool_t
, QtPrivate::TypeAndForceComplete<SettingBool, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingBool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingBool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mcrl2::gui::qt::SettingBool::changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__SettingFloat_t {
    const uint offsetsAndSize[10];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingFloat_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mcrl2__gui__qt__SettingFloat_t qt_meta_stringdata_mcrl2__gui__qt__SettingFloat = {
    {
QT_MOC_LITERAL(0, 28), // "mcrl2::gui::qt::SettingFloat"
QT_MOC_LITERAL(29, 7), // "changed"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 5), // "value"
QT_MOC_LITERAL(44, 8) // "setValue"

    },
    "mcrl2::gui::qt::SettingFloat\0changed\0"
    "\0value\0setValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingFloat[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,

       0        // eod
};

void mcrl2::gui::qt::SettingFloat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingFloat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingFloat::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingFloat::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject mcrl2::gui::qt::SettingFloat::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingFloat.offsetsAndSize,
    qt_meta_data_mcrl2__gui__qt__SettingFloat,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mcrl2__gui__qt__SettingFloat_t
, QtPrivate::TypeAndForceComplete<SettingFloat, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>


>,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingFloat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingFloat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingFloat.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingFloat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mcrl2::gui::qt::SettingFloat::changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__SettingColor_t {
    const uint offsetsAndSize[10];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingColor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mcrl2__gui__qt__SettingColor_t qt_meta_stringdata_mcrl2__gui__qt__SettingColor = {
    {
QT_MOC_LITERAL(0, 28), // "mcrl2::gui::qt::SettingColor"
QT_MOC_LITERAL(29, 7), // "changed"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 5), // "value"
QT_MOC_LITERAL(44, 8) // "setValue"

    },
    "mcrl2::gui::qt::SettingColor\0changed\0"
    "\0value\0setValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingColor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void mcrl2::gui::qt::SettingColor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingColor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingColor::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingColor::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject mcrl2::gui::qt::SettingColor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingColor.offsetsAndSize,
    qt_meta_data_mcrl2__gui__qt__SettingColor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mcrl2__gui__qt__SettingColor_t
, QtPrivate::TypeAndForceComplete<SettingColor, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>


>,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingColor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingColor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingColor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingColor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mcrl2::gui::qt::SettingColor::changed(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__SettingEnum_t {
    const uint offsetsAndSize[2];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingEnum_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mcrl2__gui__qt__SettingEnum_t qt_meta_stringdata_mcrl2__gui__qt__SettingEnum = {
    {
QT_MOC_LITERAL(0, 27) // "mcrl2::gui::qt::SettingEnum"

    },
    "mcrl2::gui::qt::SettingEnum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingEnum[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void mcrl2::gui::qt::SettingEnum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject mcrl2::gui::qt::SettingEnum::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingInt::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingEnum.offsetsAndSize,
    qt_meta_data_mcrl2__gui__qt__SettingEnum,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mcrl2__gui__qt__SettingEnum_t
, QtPrivate::TypeAndForceComplete<SettingEnum, std::true_type>



>,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingEnum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingEnum::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingEnum.stringdata0))
        return static_cast<void*>(this);
    return SettingInt::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingEnum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingInt::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
