/****************************************************************************
** Meta object code from reading C++ file 'findandreplacedialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../findandreplacedialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findandreplacedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindAndReplaceDialog_t {
    const uint offsetsAndSize[24];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FindAndReplaceDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FindAndReplaceDialog_t qt_meta_stringdata_FindAndReplaceDialog = {
    {
QT_MOC_LITERAL(0, 20), // "FindAndReplaceDialog"
QT_MOC_LITERAL(21, 14), // "setFindEnabled"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 17), // "setReplaceEnabled"
QT_MOC_LITERAL(55, 20), // "setReplaceAllEnabled"
QT_MOC_LITERAL(76, 10), // "actionFind"
QT_MOC_LITERAL(87, 13), // "forReplaceAll"
QT_MOC_LITERAL(101, 13), // "actionReplace"
QT_MOC_LITERAL(115, 16), // "actionReplaceAll"
QT_MOC_LITERAL(132, 12), // "updateEditor"
QT_MOC_LITERAL(145, 8), // "QWidget*"
QT_MOC_LITERAL(154, 6) // "widget"

    },
    "FindAndReplaceDialog\0setFindEnabled\0"
    "\0setReplaceEnabled\0setReplaceAllEnabled\0"
    "actionFind\0forReplaceAll\0actionReplace\0"
    "actionReplaceAll\0updateEditor\0QWidget*\0"
    "widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindAndReplaceDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    1,   65,    2, 0x0a,    4 /* Public */,
       5,    0,   68,    2, 0x2a,    6 /* Public | MethodCloned */,
       7,    0,   69,    2, 0x0a,    7 /* Public */,
       8,    0,   70,    2, 0x0a,    8 /* Public */,
       9,    2,   71,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,    2,   11,

       0        // eod
};

void FindAndReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindAndReplaceDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setFindEnabled(); break;
        case 1: _t->setReplaceEnabled(); break;
        case 2: _t->setReplaceAllEnabled(); break;
        case 3: _t->actionFind((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->actionFind(); break;
        case 5: _t->actionReplace(); break;
        case 6: _t->actionReplaceAll(); break;
        case 7: _t->updateEditor((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject FindAndReplaceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FindAndReplaceDialog.offsetsAndSize,
    qt_meta_data_FindAndReplaceDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FindAndReplaceDialog_t
, QtPrivate::TypeAndForceComplete<FindAndReplaceDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>


>,
    nullptr
} };


const QMetaObject *FindAndReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindAndReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindAndReplaceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FindAndReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
