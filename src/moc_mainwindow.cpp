/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "updateLobsterCommand"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "arguments"
QT_MOC_LITERAL(4, 43, 24), // "runCurrentLobsterCommand"
QT_MOC_LITERAL(5, 68, 17), // "runLobsterCommand"
QT_MOC_LITERAL(6, 86, 7), // "command"
QT_MOC_LITERAL(7, 94, 22), // "runCommandCreateInputs"
QT_MOC_LITERAL(8, 117, 21), // "runCommandDescription"
QT_MOC_LITERAL(9, 139, 28), // "runCommandDescriptionQuality"
QT_MOC_LITERAL(10, 168, 23), // "runCommandPlotAutomatic"
QT_MOC_LITERAL(11, 192, 34), // "runCommandPlotAutomaticIntera..."
QT_MOC_LITERAL(12, 227, 17), // "runCommandPlotDos"
QT_MOC_LITERAL(13, 245, 14), // "runCommandHelp"
QT_MOC_LITERAL(14, 260, 10), // "readOutput"
QT_MOC_LITERAL(15, 271, 9), // "readError"
QT_MOC_LITERAL(16, 281, 13) // "openDirectory"

    },
    "MainWindow\0updateLobsterCommand\0\0"
    "arguments\0runCurrentLobsterCommand\0"
    "runLobsterCommand\0command\0"
    "runCommandCreateInputs\0runCommandDescription\0"
    "runCommandDescriptionQuality\0"
    "runCommandPlotAutomatic\0"
    "runCommandPlotAutomaticInteractive\0"
    "runCommandPlotDos\0runCommandHelp\0"
    "readOutput\0readError\0openDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateLobsterCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->runCurrentLobsterCommand(); break;
        case 2: _t->runLobsterCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->runCommandCreateInputs(); break;
        case 4: _t->runCommandDescription(); break;
        case 5: _t->runCommandDescriptionQuality(); break;
        case 6: _t->runCommandPlotAutomatic(); break;
        case 7: _t->runCommandPlotAutomaticInteractive(); break;
        case 8: _t->runCommandPlotDos(); break;
        case 9: _t->runCommandHelp(); break;
        case 10: _t->readOutput(); break;
        case 11: _t->readError(); break;
        case 12: _t->openDirectory(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
