/****************************************************************************
** Meta object code from reading C++ file 'rewriter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rewriter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rewriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Rewriter_t {
    const uint offsetsAndSize[22];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Rewriter_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Rewriter_t qt_meta_stringdata_Rewriter = {
    {
QT_MOC_LITERAL(0, 8), // "Rewriter"
QT_MOC_LITERAL(9, 9), // "rewritten"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 6), // "output"
QT_MOC_LITERAL(27, 8), // "finished"
QT_MOC_LITERAL(36, 10), // "parseError"
QT_MOC_LITERAL(47, 5), // "error"
QT_MOC_LITERAL(53, 9), // "exprError"
QT_MOC_LITERAL(63, 7), // "rewrite"
QT_MOC_LITERAL(71, 13), // "specification"
QT_MOC_LITERAL(85, 14) // "dataExpression"

    },
    "Rewriter\0rewritten\0\0output\0finished\0"
    "parseError\0error\0exprError\0rewrite\0"
    "specification\0dataExpression"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Rewriter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    0,   47,    2, 0x06,    3 /* Public */,
       5,    1,   48,    2, 0x06,    4 /* Public */,
       7,    1,   51,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   54,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,

       0        // eod
};

void Rewriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Rewriter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rewritten((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->parseError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->exprError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->rewrite((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Rewriter::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rewriter::rewritten)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Rewriter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rewriter::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Rewriter::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rewriter::parseError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Rewriter::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rewriter::exprError)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Rewriter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Rewriter.offsetsAndSize,
    qt_meta_data_Rewriter,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Rewriter_t
, QtPrivate::TypeAndForceComplete<Rewriter, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *Rewriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rewriter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Rewriter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Rewriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Rewriter::rewritten(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Rewriter::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Rewriter::parseError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Rewriter::exprError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
