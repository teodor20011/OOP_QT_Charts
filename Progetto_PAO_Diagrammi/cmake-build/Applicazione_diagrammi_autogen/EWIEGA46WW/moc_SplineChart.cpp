/****************************************************************************
** Meta object code from reading C++ file 'SplineChart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SplineChart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SplineChart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SplineChart_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplineChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplineChart_t qt_meta_stringdata_SplineChart = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SplineChart"
QT_MOC_LITERAL(1, 12, 15), // "updateChartSets"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "deleteSetAt"
QT_MOC_LITERAL(4, 41, 5), // "index"
QT_MOC_LITERAL(5, 47, 17), // "updateDataOnSetAt"
QT_MOC_LITERAL(6, 65, 11), // "updateChart"
QT_MOC_LITERAL(7, 77, 8), // "setColor"
QT_MOC_LITERAL(8, 86, 9) // "new_color"

    },
    "SplineChart\0updateChartSets\0\0deleteSetAt\0"
    "index\0updateDataOnSetAt\0updateChart\0"
    "setColor\0new_color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplineChart[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void SplineChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SplineChart *_t = static_cast<SplineChart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateChartSets(); break;
        case 1: _t->deleteSetAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateDataOnSetAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateChart(); break;
        case 4: _t->setColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SplineChart::staticMetaObject = {
    { &AbstractChart::staticMetaObject, qt_meta_stringdata_SplineChart.data,
      qt_meta_data_SplineChart,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SplineChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplineChart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplineChart.stringdata0))
        return static_cast<void*>(this);
    return AbstractChart::qt_metacast(_clname);
}

int SplineChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractChart::qt_metacall(_c, _id, _a);
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
