/****************************************************************************
** Meta object code from reading C++ file 'clinicdaytime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CliniC/clinicdaytime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clinicdaytime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClinicDayTime_t {
    QByteArrayData data[13];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClinicDayTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClinicDayTime_t qt_meta_stringdata_ClinicDayTime = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClinicDayTime"
QT_MOC_LITERAL(1, 14, 31), // "on_save_settings_button_pressed"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 32), // "on_save_settings_button_released"
QT_MOC_LITERAL(4, 80, 32), // "on_cancel_setting_button_pressed"
QT_MOC_LITERAL(5, 113, 33), // "on_cancel_setting_button_rele..."
QT_MOC_LITERAL(6, 147, 24), // "on_quarter_radio_clicked"
QT_MOC_LITERAL(7, 172, 21), // "on_half_radio_clicked"
QT_MOC_LITERAL(8, 194, 25), // "on_one_hour_radio_clicked"
QT_MOC_LITERAL(9, 220, 31), // "on_save_settings_button_clicked"
QT_MOC_LITERAL(10, 252, 40), // "on_choose_hour_combo_currentI..."
QT_MOC_LITERAL(11, 293, 5), // "index"
QT_MOC_LITERAL(12, 299, 32) // "on_cancel_setting_button_clicked"

    },
    "ClinicDayTime\0on_save_settings_button_pressed\0"
    "\0on_save_settings_button_released\0"
    "on_cancel_setting_button_pressed\0"
    "on_cancel_setting_button_released\0"
    "on_quarter_radio_clicked\0on_half_radio_clicked\0"
    "on_one_hour_radio_clicked\0"
    "on_save_settings_button_clicked\0"
    "on_choose_hour_combo_currentIndexChanged\0"
    "index\0on_cancel_setting_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClinicDayTime[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void ClinicDayTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClinicDayTime *_t = static_cast<ClinicDayTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_save_settings_button_pressed(); break;
        case 1: _t->on_save_settings_button_released(); break;
        case 2: _t->on_cancel_setting_button_pressed(); break;
        case 3: _t->on_cancel_setting_button_released(); break;
        case 4: _t->on_quarter_radio_clicked(); break;
        case 5: _t->on_half_radio_clicked(); break;
        case 6: _t->on_one_hour_radio_clicked(); break;
        case 7: _t->on_save_settings_button_clicked(); break;
        case 8: _t->on_choose_hour_combo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_cancel_setting_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ClinicDayTime::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClinicDayTime.data,
      qt_meta_data_ClinicDayTime,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClinicDayTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClinicDayTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClinicDayTime.stringdata0))
        return static_cast<void*>(const_cast< ClinicDayTime*>(this));
    return QDialog::qt_metacast(_clname);
}

int ClinicDayTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
