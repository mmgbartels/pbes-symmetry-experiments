/****************************************************************************
** Meta object code from reading C++ file 'diagrameditor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../diagrameditor.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagrameditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DiagramEditor_t {
    const uint offsetsAndSize[68];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DiagramEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DiagramEditor_t qt_meta_stringdata_DiagramEditor = {
    {
QT_MOC_LITERAL(0, 13), // "DiagramEditor"
QT_MOC_LITERAL(14, 10), // "setDiagram"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 8), // "Diagram*"
QT_MOC_LITERAL(35, 4), // "dgrm"
QT_MOC_LITERAL(40, 11), // "setEditMode"
QT_MOC_LITERAL(52, 4), // "mode"
QT_MOC_LITERAL(57, 13), // "setSelectMode"
QT_MOC_LITERAL(71, 11), // "setNoteMode"
QT_MOC_LITERAL(83, 16), // "setConfigureMode"
QT_MOC_LITERAL(100, 16), // "setRectangleMode"
QT_MOC_LITERAL(117, 14), // "setEllipseMode"
QT_MOC_LITERAL(132, 11), // "setLineMode"
QT_MOC_LITERAL(144, 12), // "setArrowMode"
QT_MOC_LITERAL(157, 18), // "setDoubleArrowMode"
QT_MOC_LITERAL(176, 11), // "setShowGrid"
QT_MOC_LITERAL(188, 4), // "show"
QT_MOC_LITERAL(193, 11), // "setSnapGrid"
QT_MOC_LITERAL(205, 12), // "setFillColor"
QT_MOC_LITERAL(218, 12), // "setLineColor"
QT_MOC_LITERAL(231, 7), // "editDof"
QT_MOC_LITERAL(239, 6), // "Shape*"
QT_MOC_LITERAL(246, 5), // "shape"
QT_MOC_LITERAL(252, 8), // "editNote"
QT_MOC_LITERAL(261, 12), // "editTextSize"
QT_MOC_LITERAL(274, 9), // "cutShapes"
QT_MOC_LITERAL(284, 10), // "copyShapes"
QT_MOC_LITERAL(295, 11), // "pasteShapes"
QT_MOC_LITERAL(307, 15), // "selectAllShapes"
QT_MOC_LITERAL(323, 12), // "deleteShapes"
QT_MOC_LITERAL(336, 12), // "bringToFront"
QT_MOC_LITERAL(349, 10), // "sendToBack"
QT_MOC_LITERAL(360, 12), // "bringForward"
QT_MOC_LITERAL(373, 12) // "sendBackward"

    },
    "DiagramEditor\0setDiagram\0\0Diagram*\0"
    "dgrm\0setEditMode\0mode\0setSelectMode\0"
    "setNoteMode\0setConfigureMode\0"
    "setRectangleMode\0setEllipseMode\0"
    "setLineMode\0setArrowMode\0setDoubleArrowMode\0"
    "setShowGrid\0show\0setSnapGrid\0setFillColor\0"
    "setLineColor\0editDof\0Shape*\0shape\0"
    "editNote\0editTextSize\0cutShapes\0"
    "copyShapes\0pasteShapes\0selectAllShapes\0"
    "deleteShapes\0bringToFront\0sendToBack\0"
    "bringForward\0sendBackward"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiagramEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  182,    2, 0x0a,    1 /* Public */,
       5,    1,  185,    2, 0x0a,    3 /* Public */,
       7,    0,  188,    2, 0x0a,    5 /* Public */,
       8,    0,  189,    2, 0x0a,    6 /* Public */,
       9,    0,  190,    2, 0x0a,    7 /* Public */,
      10,    0,  191,    2, 0x0a,    8 /* Public */,
      11,    0,  192,    2, 0x0a,    9 /* Public */,
      12,    0,  193,    2, 0x0a,   10 /* Public */,
      13,    0,  194,    2, 0x0a,   11 /* Public */,
      14,    0,  195,    2, 0x0a,   12 /* Public */,
      15,    1,  196,    2, 0x0a,   13 /* Public */,
      17,    1,  199,    2, 0x0a,   15 /* Public */,
      18,    0,  202,    2, 0x0a,   17 /* Public */,
      19,    0,  203,    2, 0x0a,   18 /* Public */,
      20,    1,  204,    2, 0x0a,   19 /* Public */,
      20,    0,  207,    2, 0x2a,   21 /* Public | MethodCloned */,
      23,    1,  208,    2, 0x0a,   22 /* Public */,
      23,    0,  211,    2, 0x2a,   24 /* Public | MethodCloned */,
      24,    0,  212,    2, 0x0a,   25 /* Public */,
      25,    0,  213,    2, 0x0a,   26 /* Public */,
      26,    0,  214,    2, 0x0a,   27 /* Public */,
      27,    0,  215,    2, 0x0a,   28 /* Public */,
      28,    0,  216,    2, 0x0a,   29 /* Public */,
      29,    0,  217,    2, 0x0a,   30 /* Public */,
      30,    0,  218,    2, 0x0a,   31 /* Public */,
      31,    0,  219,    2, 0x0a,   32 /* Public */,
      32,    0,  220,    2, 0x0a,   33 /* Public */,
      33,    0,  221,    2, 0x0a,   34 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 21,   22,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DiagramEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiagramEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDiagram((*reinterpret_cast< std::add_pointer_t<Diagram*>>(_a[1]))); break;
        case 1: _t->setEditMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setSelectMode(); break;
        case 3: _t->setNoteMode(); break;
        case 4: _t->setConfigureMode(); break;
        case 5: _t->setRectangleMode(); break;
        case 6: _t->setEllipseMode(); break;
        case 7: _t->setLineMode(); break;
        case 8: _t->setArrowMode(); break;
        case 9: _t->setDoubleArrowMode(); break;
        case 10: _t->setShowGrid((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setSnapGrid((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setFillColor(); break;
        case 13: _t->setLineColor(); break;
        case 14: _t->editDof((*reinterpret_cast< std::add_pointer_t<Shape*>>(_a[1]))); break;
        case 15: _t->editDof(); break;
        case 16: { bool _r = _t->editNote((*reinterpret_cast< std::add_pointer_t<Shape*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->editNote();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->editTextSize(); break;
        case 19: _t->cutShapes(); break;
        case 20: _t->copyShapes(); break;
        case 21: _t->pasteShapes(); break;
        case 22: _t->selectAllShapes(); break;
        case 23: _t->deleteShapes(); break;
        case 24: _t->bringToFront(); break;
        case 25: _t->sendToBack(); break;
        case 26: _t->bringForward(); break;
        case 27: _t->sendBackward(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Diagram* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Shape* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Shape* >(); break;
            }
            break;
        }
    }
}

const QMetaObject DiagramEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<Visualizer::staticMetaObject>(),
    qt_meta_stringdata_DiagramEditor.offsetsAndSize,
    qt_meta_data_DiagramEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DiagramEditor_t
, QtPrivate::TypeAndForceComplete<DiagramEditor, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Diagram *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Shape *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<Shape *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *DiagramEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiagramEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramEditor.stringdata0))
        return static_cast<void*>(this);
    return Visualizer::qt_metacast(_clname);
}

int DiagramEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Visualizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
