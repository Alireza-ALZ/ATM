/****************************************************************************
** Meta object code from reading C++ file 'home.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../home.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSHomeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSHomeENDCLASS = QtMocHelpers::stringData(
    "Home",
    "on_cashWithdrawalButton_clicked",
    "",
    "on_moneyTransferButton_clicked",
    "on_balanceButton_clicked",
    "on_payTaxButton_clicked",
    "on_changePasswordButton_clicked",
    "on_logoutButton_clicked",
    "on_informationButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHomeENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[5];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[25];
    char stringdata5[24];
    char stringdata6[32];
    char stringdata7[24];
    char stringdata8[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHomeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHomeENDCLASS_t qt_meta_stringdata_CLASSHomeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Home"
        QT_MOC_LITERAL(5, 31),  // "on_cashWithdrawalButton_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 30),  // "on_moneyTransferButton_clicked"
        QT_MOC_LITERAL(69, 24),  // "on_balanceButton_clicked"
        QT_MOC_LITERAL(94, 23),  // "on_payTaxButton_clicked"
        QT_MOC_LITERAL(118, 31),  // "on_changePasswordButton_clicked"
        QT_MOC_LITERAL(150, 23),  // "on_logoutButton_clicked"
        QT_MOC_LITERAL(174, 28)   // "on_informationButton_clicked"
    },
    "Home",
    "on_cashWithdrawalButton_clicked",
    "",
    "on_moneyTransferButton_clicked",
    "on_balanceButton_clicked",
    "on_payTaxButton_clicked",
    "on_changePasswordButton_clicked",
    "on_logoutButton_clicked",
    "on_informationButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHomeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Home::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSHomeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHomeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHomeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Home, std::true_type>,
        // method 'on_cashWithdrawalButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moneyTransferButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_balanceButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_payTaxButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changePasswordButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logoutButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_informationButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Home *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_cashWithdrawalButton_clicked(); break;
        case 1: _t->on_moneyTransferButton_clicked(); break;
        case 2: _t->on_balanceButton_clicked(); break;
        case 3: _t->on_payTaxButton_clicked(); break;
        case 4: _t->on_changePasswordButton_clicked(); break;
        case 5: _t->on_logoutButton_clicked(); break;
        case 6: _t->on_informationButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Home::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHomeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
