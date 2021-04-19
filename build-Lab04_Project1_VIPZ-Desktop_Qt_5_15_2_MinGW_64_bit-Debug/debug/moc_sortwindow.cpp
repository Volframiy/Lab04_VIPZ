/****************************************************************************
** Meta object code from reading C++ file 'sortwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Lab04_Project1_VIPZ/sortwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SortWindow_t {
    QByteArrayData data[15];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SortWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SortWindow_t qt_meta_stringdata_SortWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SortWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_ExitButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "sort_choose"
QT_MOC_LITERAL(4, 46, 3), // "arg"
QT_MOC_LITERAL(5, 50, 5), // "List*"
QT_MOC_LITERAL(6, 56, 5), // "pTemp"
QT_MOC_LITERAL(7, 62, 9), // "pTempNext"
QT_MOC_LITERAL(8, 72, 8), // "sort_all"
QT_MOC_LITERAL(9, 81, 28), // "on_SortSurnameButton_clicked"
QT_MOC_LITERAL(10, 110, 25), // "on_SortNameButton_clicked"
QT_MOC_LITERAL(11, 136, 28), // "on_SortBookameButton_clicked"
QT_MOC_LITERAL(12, 165, 25), // "on_SortYearButton_clicked"
QT_MOC_LITERAL(13, 191, 26), // "on_SortPagesButton_clicked"
QT_MOC_LITERAL(14, 218, 26) // "on_SortPriceButton_clicked"

    },
    "SortWindow\0on_ExitButton_clicked\0\0"
    "sort_choose\0arg\0List*\0pTemp\0pTempNext\0"
    "sort_all\0on_SortSurnameButton_clicked\0"
    "on_SortNameButton_clicked\0"
    "on_SortBookameButton_clicked\0"
    "on_SortYearButton_clicked\0"
    "on_SortPagesButton_clicked\0"
    "on_SortPriceButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    3,   60,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 5, 0x80000000 | 5,    4,    6,    7,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SortWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SortWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ExitButton_clicked(); break;
        case 1: { bool _r = _t->sort_choose((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< List*(*)>(_a[2])),(*reinterpret_cast< List*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->sort_all((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_SortSurnameButton_clicked(); break;
        case 4: _t->on_SortNameButton_clicked(); break;
        case 5: _t->on_SortBookameButton_clicked(); break;
        case 6: _t->on_SortYearButton_clicked(); break;
        case 7: _t->on_SortPagesButton_clicked(); break;
        case 8: _t->on_SortPriceButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SortWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SortWindow.data,
    qt_meta_data_SortWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SortWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SortWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SortWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
