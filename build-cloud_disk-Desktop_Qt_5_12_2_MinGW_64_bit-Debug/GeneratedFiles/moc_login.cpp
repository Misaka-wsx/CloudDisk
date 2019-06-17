/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cloud_disk/login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_login_t {
    QByteArrayData data[9];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_login_t qt_meta_stringdata_login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "login"
QT_MOC_LITERAL(1, 6, 25), // "on_login_register_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "on_reg_back_main_clicked"
QT_MOC_LITERAL(4, 58, 23), // "on_reg_register_clicked"
QT_MOC_LITERAL(5, 82, 24), // "onSettingBackMainClicked"
QT_MOC_LITERAL(6, 107, 19), // "onLoginEnterClicked"
QT_MOC_LITERAL(7, 127, 12), // "windowChange"
QT_MOC_LITERAL(8, 140, 21) // "onSettingEnterClicked"

    },
    "login\0on_login_register_clicked\0\0"
    "on_reg_back_main_clicked\0"
    "on_reg_register_clicked\0"
    "onSettingBackMainClicked\0onLoginEnterClicked\0"
    "windowChange\0onSettingEnterClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_login_register_clicked(); break;
        case 1: _t->on_reg_back_main_clicked(); break;
        case 2: _t->on_reg_register_clicked(); break;
        case 3: _t->onSettingBackMainClicked(); break;
        case 4: _t->onLoginEnterClicked(); break;
        case 5: _t->windowChange(); break;
        case 6: _t->onSettingEnterClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject login::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_login.data,
    qt_meta_data_login,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_login.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
