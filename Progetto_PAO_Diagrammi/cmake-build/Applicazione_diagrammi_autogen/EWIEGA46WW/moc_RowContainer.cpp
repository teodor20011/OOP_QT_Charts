/****************************************************************************
** Meta object code from reading C++ file 'RowContainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RowContainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RowContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RowContainer_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RowContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RowContainer_t qt_meta_stringdata_RowContainer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RowContainer"
QT_MOC_LITERAL(1, 13, 12), // "creatingARow"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "removingARowAt"
QT_MOC_LITERAL(4, 42, 12), // "createNewRow"
QT_MOC_LITERAL(5, 55, 18), // "removeNodeFromList"
QT_MOC_LITERAL(6, 74, 11), // "removeRowAt"
QT_MOC_LITERAL(7, 86, 5), // "index"
QT_MOC_LITERAL(8, 92, 20) // "changeColorsButtonAt"

    },
    "RowContainer\0creatingARow\0\0removingARowAt\0"
    "createNewRow\0removeNodeFromList\0"
    "removeRowAt\0index\0changeColorsButtonAt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RowContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void RowContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RowContainer *_t = static_cast<RowContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->creatingARow(); break;
        case 1: _t->removingARowAt(); break;
        case 2: _t->createNewRow(); break;
        case 3: _t->removeNodeFromList(); break;
        case 4: _t->removeRowAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changeColorsButtonAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RowContainer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RowContainer::creatingARow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RowContainer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RowContainer::removingARowAt)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RowContainer::staticMetaObject = {
    { &AbstractRowContainer::staticMetaObject, qt_meta_stringdata_RowContainer.data,
      qt_meta_data_RowContainer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RowContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RowContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RowContainer.stringdata0))
        return static_cast<void*>(this);
    return AbstractRowContainer::qt_metacast(_clname);
}

int RowContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRowContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RowContainer::creatingARow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RowContainer::removingARowAt()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
