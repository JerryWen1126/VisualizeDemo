/****************************************************************************
** Meta object code from reading C++ file 'vclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_vClient_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vClient_t qt_meta_stringdata_vClient = {
    {
QT_MOC_LITERAL(0, 0, 7), // "vClient"
QT_MOC_LITERAL(1, 8, 19), // "on_exit_btn_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "isConnect"
QT_MOC_LITERAL(4, 39, 12), // "isDisconnect"
QT_MOC_LITERAL(5, 52, 11), // "readMessage"
QT_MOC_LITERAL(6, 64, 22) // "on_connect_btn_clicked"

    },
    "vClient\0on_exit_btn_clicked\0\0isConnect\0"
    "isDisconnect\0readMessage\0"
    "on_connect_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vClient[] = {

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

void vClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vClient *_t = static_cast<vClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_exit_btn_clicked(); break;
        case 1: _t->isConnect(); break;
        case 2: _t->isDisconnect(); break;
        case 3: _t->readMessage(); break;
        case 4: _t->on_connect_btn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject vClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_vClient.data,
      qt_meta_data_vClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *vClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_vClient.stringdata0))
        return static_cast<void*>(const_cast< vClient*>(this));
    return QWidget::qt_metacast(_clname);
}

int vClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
