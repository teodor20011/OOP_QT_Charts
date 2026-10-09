/****************************************************************************
** Meta object code from reading C++ file 'AbstractRowContainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../AbstractRowContainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractRowContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractRowContainer_t {
    QByteArrayData data[15];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractRowContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractRowContainer_t qt_meta_stringdata_AbstractRowContainer = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AbstractRowContainer"
QT_MOC_LITERAL(1, 21, 14), // "editingChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "editing"
QT_MOC_LITERAL(4, 45, 12), // "rowDeletedAt"
QT_MOC_LITERAL(5, 58, 5), // "index"
QT_MOC_LITERAL(6, 64, 11), // "addedOneRow"
QT_MOC_LITERAL(7, 76, 12), // "createNewRow"
QT_MOC_LITERAL(8, 89, 18), // "removeNodeFromList"
QT_MOC_LITERAL(9, 108, 15), // "resetRowButtons"
QT_MOC_LITERAL(10, 124, 11), // "editingMode"
QT_MOC_LITERAL(11, 136, 7), // "checked"
QT_MOC_LITERAL(12, 144, 18), // "showAllRowsButtons"
QT_MOC_LITERAL(13, 163, 18), // "hideAllRowsButtons"
QT_MOC_LITERAL(14, 182, 11) // "removeRowAt"

    },
    "AbstractRowContainer\0editingChanged\0"
    "\0editing\0rowDeletedAt\0index\0addedOneRow\0"
    "createNewRow\0removeNodeFromList\0"
    "resetRowButtons\0editingMode\0checked\0"
    "showAllRowsButtons\0hideAllRowsButtons\0"
    "removeRowAt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractRowContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x0a /* Public */,
      13,    0,   78,    2, 0x0a /* Public */,
      14,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void AbstractRowContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractRowContainer *_t = static_cast<AbstractRowContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rowDeletedAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addedOneRow(); break;
        case 3: _t->createNewRow(); break;
        case 4: _t->removeNodeFromList(); break;
        case 5: _t->resetRowButtons(); break;
        case 6: _t->editingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showAllRowsButtons(); break;
        case 8: _t->hideAllRowsButtons(); break;
        case 9: _t->removeRowAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AbstractRowContainer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractRowContainer::editingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractRowContainer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractRowContainer::rowDeletedAt)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractRowContainer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractRowContainer::addedOneRow)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AbstractRowContainer::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_AbstractRowContainer.data,
      qt_meta_data_AbstractRowContainer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AbstractRowContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractRowContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractRowContainer.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int AbstractRowContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AbstractRowContainer::editingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractRowContainer::rowDeletedAt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractRowContainer::addedOneRow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
