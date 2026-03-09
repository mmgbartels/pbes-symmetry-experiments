/****************************************************************************
** Meta object code from reading C++ file 'logwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/mcrl2/gui/logwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mcrl2__gui__qt__LogRelay_t {
    const uint offsetsAndSize[12];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mcrl2__gui__qt__LogRelay_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mcrl2__gui__qt__LogRelay_t qt_meta_stringdata_mcrl2__gui__qt__LogRelay = {
    {
QT_MOC_LITERAL(0, 24), // "mcrl2::gui::qt::LogRelay"
QT_MOC_LITERAL(25, 10), // "logMessage"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 5), // "level"
QT_MOC_LITERAL(43, 9), // "timestamp"
QT_MOC_LITERAL(53, 7) // "message"

    },
    "mcrl2::gui::qt::LogRelay\0logMessage\0"
    "\0level\0timestamp\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__LogRelay[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString,    3,    4,    5,

       0        // eod
};

void mcrl2::gui::qt::LogRelay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogRelay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogRelay::*)(QString , QDateTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogRelay::logMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject mcrl2::gui::qt::LogRelay::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__LogRelay.offsetsAndSize,
    qt_meta_data_mcrl2__gui__qt__LogRelay,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mcrl2__gui__qt__LogRelay_t
, QtPrivate::TypeAndForceComplete<LogRelay, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::LogRelay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::LogRelay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__LogRelay.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "output_policy"))
        return static_cast< output_policy*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::LogRelay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void mcrl2::gui::qt::LogRelay::logMessage(QString _t1, QDateTime _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__LogWidget_t {
    const uint offsetsAndSize[16];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mcrl2__gui__qt__LogWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mcrl2__gui__qt__LogWidget_t qt_meta_stringdata_mcrl2__gui__qt__LogWidget = {
    {
QT_MOC_LITERAL(0, 25), // "mcrl2::gui::qt::LogWidget"
QT_MOC_LITERAL(26, 10), // "logMessage"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 5), // "level"
QT_MOC_LITERAL(44, 9), // "timestamp"
QT_MOC_LITERAL(54, 7), // "message"
QT_MOC_LITERAL(62, 16), // "formattedMessage"
QT_MOC_LITERAL(79, 12) // "writeMessage"

    },
    "mcrl2::gui::qt::LogWidget\0logMessage\0"
    "\0level\0timestamp\0message\0formattedMessage\0"
    "writeMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__LogWidget[] = {

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
       1,    4,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    3,   35,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString,    3,    4,    5,

       0        // eod
};

void mcrl2::gui::qt::LogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 1: _t->writeMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogWidget::*)(QString , QDateTime , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogWidget::logMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject mcrl2::gui::qt::LogWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__LogWidget.offsetsAndSize,
    qt_meta_data_mcrl2__gui__qt__LogWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mcrl2__gui__qt__LogWidget_t
, QtPrivate::TypeAndForceComplete<LogWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::LogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::LogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__LogWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mcrl2::gui::qt::LogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void mcrl2::gui::qt::LogWidget::logMessage(QString _t1, QDateTime _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
