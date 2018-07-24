/****************************************************************************
** Meta object code from reading C++ file 'SecondWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SecondWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SecondWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SecondWindow_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SecondWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SecondWindow_t qt_meta_stringdata_SecondWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SecondWindow"
QT_MOC_LITERAL(1, 13, 16), // "getCurrentObject"
QT_MOC_LITERAL(2, 30, 5), // "Food*"
QT_MOC_LITERAL(3, 36, 0), // ""
QT_MOC_LITERAL(4, 37, 21), // "on_pickButton_clicked"
QT_MOC_LITERAL(5, 59, 23), // "on_chooseButton_clicked"
QT_MOC_LITERAL(6, 83, 21), // "on_undoButton_clicked"
QT_MOC_LITERAL(7, 105, 14) // "changeCalories"

    },
    "SecondWindow\0getCurrentObject\0Food*\0"
    "\0on_pickButton_clicked\0on_chooseButton_clicked\0"
    "on_undoButton_clicked\0changeCalories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecondWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    3, 0x08 /* Private */,
       4,    0,   40,    3, 0x08 /* Private */,
       5,    0,   41,    3, 0x08 /* Private */,
       6,    0,   42,    3, 0x08 /* Private */,
       7,    0,   43,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SecondWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SecondWindow *_t = static_cast<SecondWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Food* _r = _t->getCurrentObject();
            if (_a[0]) *reinterpret_cast< Food**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_pickButton_clicked(); break;
        case 2: _t->on_chooseButton_clicked(); break;
        case 3: _t->on_undoButton_clicked(); break;
        case 4: _t->changeCalories(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SecondWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SecondWindow.data,
      qt_meta_data_SecondWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SecondWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecondWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecondWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SecondWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
