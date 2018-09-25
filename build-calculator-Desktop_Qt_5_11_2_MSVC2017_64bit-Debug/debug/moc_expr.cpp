/****************************************************************************
** Meta object code from reading C++ file 'expr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../calculator/expr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_expr_t {
    QByteArrayData data[18];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_expr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_expr_t qt_meta_stringdata_expr = {
    {
QT_MOC_LITERAL(0, 0, 4), // "expr"
QT_MOC_LITERAL(1, 5, 11), // "getBtn_zero"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "getBtn_one"
QT_MOC_LITERAL(4, 29, 10), // "getBtn_two"
QT_MOC_LITERAL(5, 40, 12), // "getBtn_three"
QT_MOC_LITERAL(6, 53, 19), // "on_btn_plus_clicked"
QT_MOC_LITERAL(7, 73, 19), // "on_btn_four_clicked"
QT_MOC_LITERAL(8, 93, 19), // "on_btn_five_clicked"
QT_MOC_LITERAL(9, 113, 18), // "on_btn_six_clicked"
QT_MOC_LITERAL(10, 132, 20), // "on_btn_seven_clicked"
QT_MOC_LITERAL(11, 153, 20), // "on_btn_eight_clicked"
QT_MOC_LITERAL(12, 174, 19), // "on_btn_nine_clicked"
QT_MOC_LITERAL(13, 194, 18), // "on_btn_sub_clicked"
QT_MOC_LITERAL(14, 213, 18), // "on_btn_mul_clicked"
QT_MOC_LITERAL(15, 232, 18), // "on_btn_div_clicked"
QT_MOC_LITERAL(16, 251, 20), // "on_btn_equal_clicked"
QT_MOC_LITERAL(17, 272, 20) // "on_btn_clear_clicked"

    },
    "expr\0getBtn_zero\0\0getBtn_one\0getBtn_two\0"
    "getBtn_three\0on_btn_plus_clicked\0"
    "on_btn_four_clicked\0on_btn_five_clicked\0"
    "on_btn_six_clicked\0on_btn_seven_clicked\0"
    "on_btn_eight_clicked\0on_btn_nine_clicked\0"
    "on_btn_sub_clicked\0on_btn_mul_clicked\0"
    "on_btn_div_clicked\0on_btn_equal_clicked\0"
    "on_btn_clear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_expr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void expr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        expr *_t = static_cast<expr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getBtn_zero(); break;
        case 1: _t->getBtn_one(); break;
        case 2: _t->getBtn_two(); break;
        case 3: _t->getBtn_three(); break;
        case 4: _t->on_btn_plus_clicked(); break;
        case 5: _t->on_btn_four_clicked(); break;
        case 6: _t->on_btn_five_clicked(); break;
        case 7: _t->on_btn_six_clicked(); break;
        case 8: _t->on_btn_seven_clicked(); break;
        case 9: _t->on_btn_eight_clicked(); break;
        case 10: _t->on_btn_nine_clicked(); break;
        case 11: _t->on_btn_sub_clicked(); break;
        case 12: _t->on_btn_mul_clicked(); break;
        case 13: _t->on_btn_div_clicked(); break;
        case 14: _t->on_btn_equal_clicked(); break;
        case 15: _t->on_btn_clear_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject expr::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_expr.data,
      qt_meta_data_expr,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *expr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *expr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_expr.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int expr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
