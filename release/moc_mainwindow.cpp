/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../someapp/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(4, 59, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(5, 83, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(6, 110, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(7, 134, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(8, 158, 24), // "on_actionExcel_triggered"
QT_MOC_LITERAL(9, 183, 22), // "on_actionAdd_triggered"
QT_MOC_LITERAL(10, 206, 25), // "on_actionDelete_triggered"
QT_MOC_LITERAL(11, 232, 25), // "on_actionUpdate_triggered"
QT_MOC_LITERAL(12, 258, 17), // "on_Search_clicked"
QT_MOC_LITERAL(13, 276, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 298, 22), // "on_actionPdf_triggered"
QT_MOC_LITERAL(15, 321, 31), // "on_actionGenerate_Pdf_triggered"
QT_MOC_LITERAL(16, 353, 17), // "on_Filter_clicked"
QT_MOC_LITERAL(17, 371, 23), // "on_Clear_Filter_clicked"
QT_MOC_LITERAL(18, 395, 32), // "on_tableWidget_cellDoubleClicked"
QT_MOC_LITERAL(19, 428, 3), // "row"
QT_MOC_LITERAL(20, 432, 6) // "column"

    },
    "MainWindow\0on_actionOpen_triggered\0\0"
    "on_actionNew_triggered\0on_actionSave_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionExcel_triggered\0"
    "on_actionAdd_triggered\0on_actionDelete_triggered\0"
    "on_actionUpdate_triggered\0on_Search_clicked\0"
    "on_pushButton_clicked\0on_actionPdf_triggered\0"
    "on_actionGenerate_Pdf_triggered\0"
    "on_Filter_clicked\0on_Clear_Filter_clicked\0"
    "on_tableWidget_cellDoubleClicked\0row\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    2,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionOpen_triggered(); break;
        case 1: _t->on_actionNew_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionSave_as_triggered(); break;
        case 4: _t->on_actionUndo_triggered(); break;
        case 5: _t->on_actionRedo_triggered(); break;
        case 6: _t->on_actionExcel_triggered(); break;
        case 7: _t->on_actionAdd_triggered(); break;
        case 8: _t->on_actionDelete_triggered(); break;
        case 9: _t->on_actionUpdate_triggered(); break;
        case 10: _t->on_Search_clicked(); break;
        case 11: _t->on_pushButton_clicked(); break;
        case 12: _t->on_actionPdf_triggered(); break;
        case 13: _t->on_actionGenerate_Pdf_triggered(); break;
        case 14: _t->on_Filter_clicked(); break;
        case 15: _t->on_Clear_Filter_clicked(); break;
        case 16: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
