/****************************************************************************
** Meta object code from reading C++ file 'rewriteexpressiondock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rewriteexpressiondock.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rewriteexpressiondock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RewriteExpressionDock_t {
    const uint offsetsAndSize[12];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_RewriteExpressionDock_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_RewriteExpressionDock_t qt_meta_stringdata_RewriteExpressionDock = {
    {
QT_MOC_LITERAL(0, 21), // "RewriteExpressionDock"
QT_MOC_LITERAL(22, 17), // "rewriteExpression"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 19), // "actionRewriteResult"
QT_MOC_LITERAL(61, 9), // "processId"
QT_MOC_LITERAL(71, 13) // "cancelRewrite"

    },
    "RewriteExpressionDock\0rewriteExpression\0"
    "\0actionRewriteResult\0processId\0"
    "cancelRewrite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RewriteExpressionDock[] = {

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
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    1,   33,    2, 0x08,    2 /* Private */,
       5,    0,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void RewriteExpressionDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RewriteExpressionDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rewriteExpression(); break;
        case 1: _t->actionRewriteResult((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->cancelRewrite(); break;
        default: ;
        }
    }
}

const QMetaObject RewriteExpressionDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_RewriteExpressionDock.offsetsAndSize,
    qt_meta_data_RewriteExpressionDock,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_RewriteExpressionDock_t
, QtPrivate::TypeAndForceComplete<RewriteExpressionDock, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *RewriteExpressionDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RewriteExpressionDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RewriteExpressionDock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int RewriteExpressionDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
