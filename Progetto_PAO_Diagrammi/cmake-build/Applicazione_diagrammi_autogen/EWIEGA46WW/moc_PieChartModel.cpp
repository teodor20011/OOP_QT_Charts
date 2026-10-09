/****************************************************************************
** Meta object code from reading C++ file 'PieChartModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PieChartModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PieChartModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PieChartModel_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PieChartModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PieChartModel_t qt_meta_stringdata_PieChartModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PieChartModel"
QT_MOC_LITERAL(1, 14, 14), // "saveModelToXML"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "QXmlStreamWriter*"
QT_MOC_LITERAL(4, 48, 6), // "stream"
QT_MOC_LITERAL(5, 55, 15), // "saveModelToJson"
QT_MOC_LITERAL(6, 71, 12), // "QJsonObject*"
QT_MOC_LITERAL(7, 84, 4) // "json"

    },
    "PieChartModel\0saveModelToXML\0\0"
    "QXmlStreamWriter*\0stream\0saveModelToJson\0"
    "QJsonObject*\0json"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PieChartModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void PieChartModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PieChartModel *_t = static_cast<PieChartModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveModelToXML((*reinterpret_cast< QXmlStreamWriter*(*)>(_a[1]))); break;
        case 1: _t->saveModelToJson((*reinterpret_cast< QJsonObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PieChartModel::staticMetaObject = {
    { &AbstractModel::staticMetaObject, qt_meta_stringdata_PieChartModel.data,
      qt_meta_data_PieChartModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PieChartModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PieChartModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PieChartModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int PieChartModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
