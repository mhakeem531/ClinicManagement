/****************************************************************************
** Meta object code from reading C++ file 'bookcommingappointment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CliniC/bookcommingappointment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookcommingappointment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BookCommingAppointment_t {
    QByteArrayData data[11];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookCommingAppointment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookCommingAppointment_t qt_meta_stringdata_BookCommingAppointment = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BookCommingAppointment"
QT_MOC_LITERAL(1, 23, 40), // "on_add_new_booked_patient_but..."
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 41), // "on_add_new_booked_patient_but..."
QT_MOC_LITERAL(4, 107, 40), // "on_cancel_add_new_patient_but..."
QT_MOC_LITERAL(5, 148, 41), // "on_cancel_add_new_patient_but..."
QT_MOC_LITERAL(6, 190, 12), // "setDateLabel"
QT_MOC_LITERAL(7, 203, 40), // "on_cancel_add_new_patient_but..."
QT_MOC_LITERAL(8, 244, 40), // "on_add_new_booked_patient_but..."
QT_MOC_LITERAL(9, 285, 24), // "set_patient_number_label"
QT_MOC_LITERAL(10, 310, 4) // "date"

    },
    "BookCommingAppointment\0"
    "on_add_new_booked_patient_button_pressed\0"
    "\0on_add_new_booked_patient_button_released\0"
    "on_cancel_add_new_patient_button_pressed\0"
    "on_cancel_add_new_patient_button_released\0"
    "setDateLabel\0on_cancel_add_new_patient_button_clicked\0"
    "on_add_new_booked_patient_button_clicked\0"
    "set_patient_number_label\0date"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookCommingAppointment[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   10,

       0        // eod
};

void BookCommingAppointment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookCommingAppointment *_t = static_cast<BookCommingAppointment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_new_booked_patient_button_pressed(); break;
        case 1: _t->on_add_new_booked_patient_button_released(); break;
        case 2: _t->on_cancel_add_new_patient_button_pressed(); break;
        case 3: _t->on_cancel_add_new_patient_button_released(); break;
        case 4: _t->setDateLabel((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 5: _t->on_cancel_add_new_patient_button_clicked(); break;
        case 6: _t->on_add_new_booked_patient_button_clicked(); break;
        case 7: _t->set_patient_number_label((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BookCommingAppointment::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BookCommingAppointment.data,
      qt_meta_data_BookCommingAppointment,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BookCommingAppointment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookCommingAppointment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookCommingAppointment.stringdata0))
        return static_cast<void*>(const_cast< BookCommingAppointment*>(this));
    return QDialog::qt_metacast(_clname);
}

int BookCommingAppointment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
