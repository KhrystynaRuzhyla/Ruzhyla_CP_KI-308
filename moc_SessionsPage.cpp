/****************************************************************************
** Meta object code from reading C++ file 'DevicePage.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/DevicePage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DevicePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
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
struct qt_meta_tag_ZN10DevicePageE_t {};
} // unnamed namespace

template <> constexpr inline auto DevicePage::qt_create_metaobjectdata<qt_meta_tag_ZN10DevicePageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DevicePage",
        "refreshRequested",
        "",
        "setDefaultRequested",
        "deviceId",
        "testRequested",
        "openSystemSettingsRequested",
        "deviceSelected",
        "AudioDevice",
        "device"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'refreshRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'setDefaultRequested'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'testRequested'
        QtMocHelpers::SignalData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'openSystemSettingsRequested'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deviceSelected'
        QtMocHelpers::SignalData<void(const AudioDevice &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DevicePage, qt_meta_tag_ZN10DevicePageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DevicePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DevicePageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DevicePageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10DevicePageE_t>.metaTypes,
    nullptr
} };

void DevicePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DevicePage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->refreshRequested(); break;
        case 1: _t->setDefaultRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->testRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->openSystemSettingsRequested(); break;
        case 4: _t->deviceSelected((*reinterpret_cast<std::add_pointer_t<AudioDevice>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DevicePage::*)()>(_a, &DevicePage::refreshRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DevicePage::*)(const QString & )>(_a, &DevicePage::setDefaultRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DevicePage::*)(const QString & )>(_a, &DevicePage::testRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DevicePage::*)()>(_a, &DevicePage::openSystemSettingsRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DevicePage::*)(const AudioDevice & )>(_a, &DevicePage::deviceSelected, 4))
            return;
    }
}

const QMetaObject *DevicePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DevicePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DevicePageE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DevicePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DevicePage::refreshRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DevicePage::setDefaultRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void DevicePage::testRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void DevicePage::openSystemSettingsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DevicePage::deviceSelected(const AudioDevice & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
