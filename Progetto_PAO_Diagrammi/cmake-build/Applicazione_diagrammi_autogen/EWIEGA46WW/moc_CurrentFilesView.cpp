/****************************************************************************
** Meta object code from reading C++ file 'CurrentFilesView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../CurrentFilesView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CurrentFilesView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurrentFilesView_t {
    QByteArrayData data[15];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurrentFilesView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurrentFilesView_t qt_meta_stringdata_CurrentFilesView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CurrentFilesView"
QT_MOC_LITERAL(1, 17, 12), // "noFileOpened"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "closeTabAt"
QT_MOC_LITERAL(4, 42, 5), // "index"
QT_MOC_LITERAL(5, 48, 12), // "saveAllFiles"
QT_MOC_LITERAL(6, 61, 7), // "loadTab"
QT_MOC_LITERAL(7, 69, 8), // "QString*"
QT_MOC_LITERAL(8, 78, 9), // "file_path"
QT_MOC_LITERAL(9, 88, 16), // "createAnEmptyTab"
QT_MOC_LITERAL(10, 105, 4), // "path"
QT_MOC_LITERAL(11, 110, 9), // "ChartType"
QT_MOC_LITERAL(12, 120, 10), // "chart_type"
QT_MOC_LITERAL(13, 131, 14), // "saveSingleFile"
QT_MOC_LITERAL(14, 146, 22) // "saveFileAtCurrentIndex"

    },
    "CurrentFilesView\0noFileOpened\0\0"
    "closeTabAt\0index\0saveAllFiles\0loadTab\0"
    "QString*\0file_path\0createAnEmptyTab\0"
    "path\0ChartType\0chart_type\0saveSingleFile\0"
    "saveFileAtCurrentIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurrentFilesView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       9,    2,   62,    2, 0x0a /* Public */,
      13,    1,   67,    2, 0x0a /* Public */,
      13,    0,   70,    2, 0x2a /* Public | MethodCloned */,
      14,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CurrentFilesView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CurrentFilesView *_t = static_cast<CurrentFilesView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->noFileOpened(); break;
        case 1: _t->closeTabAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->saveAllFiles(); break;
        case 3: _t->loadTab((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 4: _t->createAnEmptyTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ChartType(*)>(_a[2]))); break;
        case 5: _t->saveSingleFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->saveSingleFile(); break;
        case 7: _t->saveFileAtCurrentIndex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CurrentFilesView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentFilesView::noFileOpened)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CurrentFilesView::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_CurrentFilesView.data,
      qt_meta_data_CurrentFilesView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CurrentFilesView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurrentFilesView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurrentFilesView.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int CurrentFilesView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CurrentFilesView::noFileOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
