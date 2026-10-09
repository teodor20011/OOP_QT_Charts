/****************************************************************************
** Meta object code from reading C++ file 'BarChartModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BarChartModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BarChartModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BarChartModel_t {
    QByteArrayData data[24];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BarChartModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BarChartModel_t qt_meta_stringdata_BarChartModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BarChartModel"
QT_MOC_LITERAL(1, 14, 13), // "seriesChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "seriesRowDeleted"
QT_MOC_LITERAL(4, 46, 5), // "index"
QT_MOC_LITERAL(5, 52, 14), // "addedNewSeries"
QT_MOC_LITERAL(6, 67, 17), // "seriesTextChanged"
QT_MOC_LITERAL(7, 85, 11), // "getSeriesAt"
QT_MOC_LITERAL(8, 97, 12), // "getAllSeries"
QT_MOC_LITERAL(9, 110, 15), // "getSeriesNumber"
QT_MOC_LITERAL(10, 126, 12), // "getChartType"
QT_MOC_LITERAL(11, 139, 9), // "ChartType"
QT_MOC_LITERAL(12, 149, 12), // "appendSeries"
QT_MOC_LITERAL(13, 162, 10), // "new_series"
QT_MOC_LITERAL(14, 173, 18), // "editExistingSeries"
QT_MOC_LITERAL(15, 192, 14), // "saveModelToXML"
QT_MOC_LITERAL(16, 207, 17), // "QXmlStreamWriter*"
QT_MOC_LITERAL(17, 225, 6), // "stream"
QT_MOC_LITERAL(18, 232, 15), // "saveModelToJson"
QT_MOC_LITERAL(19, 248, 12), // "QJsonObject*"
QT_MOC_LITERAL(20, 261, 4), // "json"
QT_MOC_LITERAL(21, 266, 16), // "loadModelFromXML"
QT_MOC_LITERAL(22, 283, 17), // "QXmlStreamReader*"
QT_MOC_LITERAL(23, 301, 17) // "loadModelFromJson"

    },
    "BarChartModel\0seriesChanged\0\0"
    "seriesRowDeleted\0index\0addedNewSeries\0"
    "seriesTextChanged\0getSeriesAt\0"
    "getAllSeries\0getSeriesNumber\0getChartType\0"
    "ChartType\0appendSeries\0new_series\0"
    "editExistingSeries\0saveModelToXML\0"
    "QXmlStreamWriter*\0stream\0saveModelToJson\0"
    "QJsonObject*\0json\0loadModelFromXML\0"
    "QXmlStreamReader*\0loadModelFromJson"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BarChartModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   90,    2, 0x0a /* Public */,
       8,    0,   93,    2, 0x0a /* Public */,
       9,    0,   94,    2, 0x0a /* Public */,
      10,    0,   95,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      14,    2,   99,    2, 0x0a /* Public */,
      15,    1,  104,    2, 0x0a /* Public */,
      18,    1,  107,    2, 0x0a /* Public */,
      21,    1,  110,    2, 0x0a /* Public */,
      23,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString, QMetaType::Int,    4,
    QMetaType::QStringList,
    QMetaType::Int,
    0x80000000 | 11,
    QMetaType::Int, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   17,
    QMetaType::Void, QMetaType::QJsonObject,   20,

       0        // eod
};

void BarChartModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BarChartModel *_t = static_cast<BarChartModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seriesChanged(); break;
        case 1: _t->seriesRowDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addedNewSeries(); break;
        case 3: _t->seriesTextChanged(); break;
        case 4: { QString _r = _t->getSeriesAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QStringList _r = _t->getAllSeries();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->getSeriesNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { ChartType _r = _t->getChartType();
            if (_a[0]) *reinterpret_cast< ChartType*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->appendSeries((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->editExistingSeries((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->saveModelToXML((*reinterpret_cast< QXmlStreamWriter*(*)>(_a[1]))); break;
        case 11: _t->saveModelToJson((*reinterpret_cast< QJsonObject*(*)>(_a[1]))); break;
        case 12: _t->loadModelFromXML((*reinterpret_cast< QXmlStreamReader*(*)>(_a[1]))); break;
        case 13: _t->loadModelFromJson((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BarChartModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BarChartModel::seriesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BarChartModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BarChartModel::seriesRowDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BarChartModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BarChartModel::addedNewSeries)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BarChartModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BarChartModel::seriesTextChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject BarChartModel::staticMetaObject = {
    { &AbstractModel::staticMetaObject, qt_meta_stringdata_BarChartModel.data,
      qt_meta_data_BarChartModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BarChartModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BarChartModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BarChartModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int BarChartModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void BarChartModel::seriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BarChartModel::seriesRowDeleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BarChartModel::addedNewSeries()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BarChartModel::seriesTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
