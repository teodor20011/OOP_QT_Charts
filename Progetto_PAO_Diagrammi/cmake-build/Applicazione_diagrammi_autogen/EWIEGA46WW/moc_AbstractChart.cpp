/****************************************************************************
** Meta object code from reading C++ file 'AbstractChart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../AbstractChart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractChart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractChart_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractChart_t qt_meta_stringdata_AbstractChart = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AbstractChart"
QT_MOC_LITERAL(1, 14, 15), // "updateChartSets"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "deleteSetAt"
QT_MOC_LITERAL(4, 43, 5), // "index"
QT_MOC_LITERAL(5, 49, 17), // "updateDataOnSetAt"
QT_MOC_LITERAL(6, 67, 11) // "updateChart"

    },
    "AbstractChart\0updateChartSets\0\0"
    "deleteSetAt\0index\0updateDataOnSetAt\0"
    "updateChart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractChart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void AbstractChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractChart *_t = static_cast<AbstractChart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateChartSets(); break;
        case 1: _t->deleteSetAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateDataOnSetAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateChart(); break;
        default: ;
        }
    }
}

const QMetaObject AbstractChart::staticMetaObject = {
    { &QChart::staticMetaObject, qt_meta_stringdata_AbstractChart.data,
      qt_meta_data_AbstractChart,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AbstractChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractChart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractChart.stringdata0))
        return static_cast<void*>(this);
    return QChart::qt_metacast(_clname);
}

int AbstractChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QChart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
