/****************************************************************************
** Meta object code from reading C++ file 'SplineDataRow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SplineDataRow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SplineDataRow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SplineDataRow_t {
    QByteArrayData data[11];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplineDataRow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplineDataRow_t qt_meta_stringdata_SplineDataRow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SplineDataRow"
QT_MOC_LITERAL(1, 14, 19), // "saveAbscissaToModel"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "saveOrdinateToModel"
QT_MOC_LITERAL(4, 55, 11), // "changeIndex"
QT_MOC_LITERAL(5, 67, 5), // "index"
QT_MOC_LITERAL(6, 73, 7), // "saveRow"
QT_MOC_LITERAL(7, 81, 17), // "QXmlStreamWriter*"
QT_MOC_LITERAL(8, 99, 6), // "stream"
QT_MOC_LITERAL(9, 106, 7), // "loadRow"
QT_MOC_LITERAL(10, 114, 17) // "QXmlStreamReader*"

    },
    "SplineDataRow\0saveAbscissaToModel\0\0"
    "saveOrdinateToModel\0changeIndex\0index\0"
    "saveRow\0QXmlStreamWriter*\0stream\0"
    "loadRow\0QXmlStreamReader*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplineDataRow[] = {

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
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    8,

       0        // eod
};

void SplineDataRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SplineDataRow *_t = static_cast<SplineDataRow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveAbscissaToModel(); break;
        case 1: _t->saveOrdinateToModel(); break;
        case 2: _t->changeIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->saveRow((*reinterpret_cast< QXmlStreamWriter*(*)>(_a[1]))); break;
        case 4: _t->loadRow((*reinterpret_cast< QXmlStreamReader*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SplineDataRow::staticMetaObject = {
    { &AbstractRow::staticMetaObject, qt_meta_stringdata_SplineDataRow.data,
      qt_meta_data_SplineDataRow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SplineDataRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplineDataRow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplineDataRow.stringdata0))
        return static_cast<void*>(this);
    return AbstractRow::qt_metacast(_clname);
}

int SplineDataRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRow::qt_metacall(_c, _id, _a);
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
