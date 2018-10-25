/****************************************************************************
** Meta object code from reading C++ file 'qtprogramwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtprogramwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtprogramwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtProgramWin_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtProgramWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtProgramWin_t qt_meta_stringdata_QtProgramWin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QtProgramWin"
QT_MOC_LITERAL(1, 13, 13), // "digit_pressed"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "negative_pressed"
QT_MOC_LITERAL(4, 45, 24), // "binary_operation_pressed"
QT_MOC_LITERAL(5, 70, 14), // "clear_released"
QT_MOC_LITERAL(6, 85, 15) // "equals_released"

    },
    "QtProgramWin\0digit_pressed\0\0"
    "negative_pressed\0binary_operation_pressed\0"
    "clear_released\0equals_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtProgramWin[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtProgramWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtProgramWin *_t = static_cast<QtProgramWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->digit_pressed(); break;
        case 1: _t->negative_pressed(); break;
        case 2: _t->binary_operation_pressed(); break;
        case 3: _t->clear_released(); break;
        case 4: _t->equals_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtProgramWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtProgramWin.data,
      qt_meta_data_QtProgramWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtProgramWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtProgramWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtProgramWin.stringdata0))
        return static_cast<void*>(const_cast< QtProgramWin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtProgramWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
