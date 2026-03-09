/****************************************************************************
** Meta object code from reading C++ file 'addeditpropertydialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../addeditpropertydialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addeditpropertydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddEditPropertyDialog_t {
    const uint offsetsAndSize[20];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AddEditPropertyDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AddEditPropertyDialog_t qt_meta_stringdata_AddEditPropertyDialog = {
    {
QT_MOC_LITERAL(0, 21), // "AddEditPropertyDialog"
QT_MOC_LITERAL(22, 18), // "actionSaveAndParse"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 12), // "parseResults"
QT_MOC_LITERAL(55, 9), // "processid"
QT_MOC_LITERAL(65, 15), // "clearParseLabel"
QT_MOC_LITERAL(81, 18), // "actionSaveAndClose"
QT_MOC_LITERAL(100, 27), // "setEquivalenceTabToModified"
QT_MOC_LITERAL(128, 4), // "done"
QT_MOC_LITERAL(133, 1) // "r"

    },
    "AddEditPropertyDialog\0actionSaveAndParse\0"
    "\0parseResults\0processid\0clearParseLabel\0"
    "actionSaveAndClose\0setEquivalenceTabToModified\0"
    "done\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddEditPropertyDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    1,   51,    2, 0x0a,    2 /* Public */,
       5,    0,   54,    2, 0x0a,    4 /* Public */,
       6,    0,   55,    2, 0x0a,    5 /* Public */,
       7,    0,   56,    2, 0x0a,    6 /* Public */,
       8,    1,   57,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void AddEditPropertyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddEditPropertyDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionSaveAndParse(); break;
        case 1: _t->parseResults((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->clearParseLabel(); break;
        case 3: _t->actionSaveAndClose(); break;
        case 4: _t->setEquivalenceTabToModified(); break;
        case 5: _t->done((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AddEditPropertyDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddEditPropertyDialog.offsetsAndSize,
    qt_meta_data_AddEditPropertyDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AddEditPropertyDialog_t
, QtPrivate::TypeAndForceComplete<AddEditPropertyDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *AddEditPropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddEditPropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddEditPropertyDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddEditPropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
