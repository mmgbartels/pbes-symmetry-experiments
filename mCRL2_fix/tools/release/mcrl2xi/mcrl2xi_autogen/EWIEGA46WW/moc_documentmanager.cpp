/****************************************************************************
** Meta object code from reading C++ file 'documentmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../documentmanager.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documentmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocumentManager_t {
    const uint offsetsAndSize[18];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DocumentManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DocumentManager_t qt_meta_stringdata_DocumentManager = {
    {
QT_MOC_LITERAL(0, 15), // "DocumentManager"
QT_MOC_LITERAL(16, 15), // "documentCreated"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 15), // "DocumentWidget*"
QT_MOC_LITERAL(49, 8), // "document"
QT_MOC_LITERAL(58, 15), // "documentChanged"
QT_MOC_LITERAL(74, 14), // "documentClosed"
QT_MOC_LITERAL(89, 16), // "onCurrentChanged"
QT_MOC_LITERAL(106, 5) // "index"

    },
    "DocumentManager\0documentCreated\0\0"
    "DocumentWidget*\0document\0documentChanged\0"
    "documentClosed\0onCurrentChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       5,    1,   41,    2, 0x06,    3 /* Public */,
       6,    1,   44,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   47,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void DocumentManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocumentManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->documentCreated((*reinterpret_cast< std::add_pointer_t<DocumentWidget*>>(_a[1]))); break;
        case 1: _t->documentChanged((*reinterpret_cast< std::add_pointer_t<DocumentWidget*>>(_a[1]))); break;
        case 2: _t->documentClosed((*reinterpret_cast< std::add_pointer_t<DocumentWidget*>>(_a[1]))); break;
        case 3: _t->onCurrentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< DocumentWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< DocumentWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< DocumentWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocumentManager::*)(DocumentWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::documentCreated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DocumentManager::*)(DocumentWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::documentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DocumentManager::*)(DocumentWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::documentClosed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DocumentManager::staticMetaObject = { {
    QMetaObject::SuperData::link<mcrl2::gui::qt::ExtendedTabWidget::staticMetaObject>(),
    qt_meta_stringdata_DocumentManager.offsetsAndSize,
    qt_meta_data_DocumentManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DocumentManager_t
, QtPrivate::TypeAndForceComplete<DocumentManager, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<DocumentWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<DocumentWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<DocumentWidget *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *DocumentManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentManager.stringdata0))
        return static_cast<void*>(this);
    return mcrl2::gui::qt::ExtendedTabWidget::qt_metacast(_clname);
}

int DocumentManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mcrl2::gui::qt::ExtendedTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DocumentManager::documentCreated(DocumentWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DocumentManager::documentChanged(DocumentWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DocumentManager::documentClosed(DocumentWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
