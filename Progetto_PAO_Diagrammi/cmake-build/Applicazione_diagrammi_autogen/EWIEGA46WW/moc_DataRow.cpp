/****************************************************************************
** Meta object code from reading C++ file 'DataRow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../DataRow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataRow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataRow_t {
    QByteArrayData data[22];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataRow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataRow_t qt_meta_stringdata_DataRow = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DataRow"
QT_MOC_LITERAL(1, 8, 12), // "deleteCopies"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "moveDownCopies"
QT_MOC_LITERAL(4, 37, 12), // "moveUpCopies"
QT_MOC_LITERAL(5, 50, 11), // "changeIndex"
QT_MOC_LITERAL(6, 62, 5), // "index"
QT_MOC_LITERAL(7, 68, 12), // "upgradeLabel"
QT_MOC_LITERAL(8, 81, 7), // "saveRow"
QT_MOC_LITERAL(9, 89, 17), // "QXmlStreamWriter*"
QT_MOC_LITERAL(10, 107, 6), // "stream"
QT_MOC_LITERAL(11, 114, 7), // "loadRow"
QT_MOC_LITERAL(12, 122, 17), // "QXmlStreamReader*"
QT_MOC_LITERAL(13, 140, 16), // "saveLabelToModel"
QT_MOC_LITERAL(14, 157, 9), // "new_label"
QT_MOC_LITERAL(15, 167, 16), // "saveColorToModel"
QT_MOC_LITERAL(16, 184, 9), // "new_color"
QT_MOC_LITERAL(17, 194, 15), // "saveDataToModel"
QT_MOC_LITERAL(18, 210, 8), // "new_data"
QT_MOC_LITERAL(19, 219, 16), // "loadRowFromModel"
QT_MOC_LITERAL(20, 236, 17), // "increaseDataIndex"
QT_MOC_LITERAL(21, 254, 17) // "decreaseDataIndex"

    },
    "DataRow\0deleteCopies\0\0moveDownCopies\0"
    "moveUpCopies\0changeIndex\0index\0"
    "upgradeLabel\0saveRow\0QXmlStreamWriter*\0"
    "stream\0loadRow\0QXmlStreamReader*\0"
    "saveLabelToModel\0new_label\0saveColorToModel\0"
    "new_color\0saveDataToModel\0new_data\0"
    "loadRowFromModel\0increaseDataIndex\0"
    "decreaseDataIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataRow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   82,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
       8,    1,   88,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      13,    1,   94,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,
      17,    1,  100,    2, 0x0a /* Public */,
      19,    0,  103,    2, 0x0a /* Public */,
      20,    0,  104,    2, 0x0a /* Public */,
      21,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   10,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataRow *_t = static_cast<DataRow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteCopies(); break;
        case 1: _t->moveDownCopies(); break;
        case 2: _t->moveUpCopies(); break;
        case 3: _t->changeIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->upgradeLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->saveRow((*reinterpret_cast< QXmlStreamWriter*(*)>(_a[1]))); break;
        case 6: _t->loadRow((*reinterpret_cast< QXmlStreamReader*(*)>(_a[1]))); break;
        case 7: _t->saveLabelToModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->saveColorToModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->saveDataToModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->loadRowFromModel(); break;
        case 11: _t->increaseDataIndex(); break;
        case 12: _t->decreaseDataIndex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DataRow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRow::deleteCopies)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DataRow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRow::moveDownCopies)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DataRow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRow::moveUpCopies)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DataRow::staticMetaObject = {
    { &AbstractRow::staticMetaObject, qt_meta_stringdata_DataRow.data,
      qt_meta_data_DataRow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DataRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataRow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataRow.stringdata0))
        return static_cast<void*>(this);
    return AbstractRow::qt_metacast(_clname);
}

int DataRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DataRow::deleteCopies()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DataRow::moveDownCopies()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DataRow::moveUpCopies()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
