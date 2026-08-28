/****************************************************************************
** Meta object code from reading C++ file 'ircguicontrolclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ircguicontrolclient.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ircguicontrolclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_IRCGuiControlClient_t {
    uint offsetsAndSizes[18];
    char stringdata0[20];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[19];
    char stringdata5[4];
    char stringdata6[15];
    char stringdata7[12];
    char stringdata8[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_IRCGuiControlClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_IRCGuiControlClient_t qt_meta_stringdata_IRCGuiControlClient = {
    {
        QT_MOC_LITERAL(0, 19),  // "IRCGuiControlClient"
        QT_MOC_LITERAL(20, 20),  // "connectErrorDetected"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 6),  // "reason"
        QT_MOC_LITERAL(49, 18),  // "serverStatusNotify"
        QT_MOC_LITERAL(68, 3),  // "msg"
        QT_MOC_LITERAL(72, 14),  // "sendDoneNotify"
        QT_MOC_LITERAL(87, 11),  // "connectDone"
        QT_MOC_LITERAL(99, 11)   // "msgReceived"
    },
    "IRCGuiControlClient",
    "connectErrorDetected",
    "",
    "reason",
    "serverStatusNotify",
    "msg",
    "sendDoneNotify",
    "connectDone",
    "msgReceived"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_IRCGuiControlClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,
       6,    1,   50,    2, 0x06,    5 /* Public */,
       7,    0,   53,    2, 0x06,    7 /* Public */,
       8,    1,   54,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject IRCGuiControlClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_IRCGuiControlClient.offsetsAndSizes,
    qt_meta_data_IRCGuiControlClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_IRCGuiControlClient_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IRCGuiControlClient, std::true_type>,
        // method 'connectErrorDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'serverStatusNotify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'sendDoneNotify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'connectDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'msgReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void IRCGuiControlClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IRCGuiControlClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectErrorDetected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->serverStatusNotify((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->sendDoneNotify((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->connectDone(); break;
        case 4: _t->msgReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IRCGuiControlClient::*)(const QString );
            if (_t _q_method = &IRCGuiControlClient::connectErrorDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IRCGuiControlClient::*)(const QString );
            if (_t _q_method = &IRCGuiControlClient::serverStatusNotify; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IRCGuiControlClient::*)(const QString );
            if (_t _q_method = &IRCGuiControlClient::sendDoneNotify; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IRCGuiControlClient::*)();
            if (_t _q_method = &IRCGuiControlClient::connectDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (IRCGuiControlClient::*)(QString );
            if (_t _q_method = &IRCGuiControlClient::msgReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *IRCGuiControlClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IRCGuiControlClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IRCGuiControlClient.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int IRCGuiControlClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void IRCGuiControlClient::connectErrorDetected(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IRCGuiControlClient::serverStatusNotify(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IRCGuiControlClient::sendDoneNotify(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IRCGuiControlClient::connectDone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void IRCGuiControlClient::msgReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
