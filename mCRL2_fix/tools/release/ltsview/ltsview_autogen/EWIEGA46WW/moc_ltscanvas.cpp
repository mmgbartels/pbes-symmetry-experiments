/****************************************************************************
** Meta object code from reading C++ file 'ltscanvas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ltscanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ltscanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LtsCanvas_t {
    const uint offsetsAndSize[16];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LtsCanvas_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LtsCanvas_t qt_meta_stringdata_LtsCanvas = {
    {
QT_MOC_LITERAL(0, 9), // "LtsCanvas"
QT_MOC_LITERAL(10, 16), // "renderingStarted"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 17), // "renderingFinished"
QT_MOC_LITERAL(46, 9), // "resetView"
QT_MOC_LITERAL(56, 12), // "exportToText"
QT_MOC_LITERAL(69, 8), // "filename"
QT_MOC_LITERAL(78, 23) // "clusterPositionsChanged"

    },
    "LtsCanvas\0renderingStarted\0\0"
    "renderingFinished\0resetView\0exportToText\0"
    "filename\0clusterPositionsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LtsCanvas[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    1,   47,    2, 0x0a,    4 /* Public */,
       7,    0,   50,    2, 0x09,    6 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void LtsCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LtsCanvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->renderingStarted(); break;
        case 1: _t->renderingFinished(); break;
        case 2: _t->resetView(); break;
        case 3: _t->exportToText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->clusterPositionsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LtsCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsCanvas::renderingStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LtsCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsCanvas::renderingFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LtsCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_LtsCanvas.offsetsAndSize,
    qt_meta_data_LtsCanvas,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LtsCanvas_t
, QtPrivate::TypeAndForceComplete<LtsCanvas, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LtsCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LtsCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LtsCanvas.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int LtsCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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
void LtsCanvas::renderingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LtsCanvas::renderingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
