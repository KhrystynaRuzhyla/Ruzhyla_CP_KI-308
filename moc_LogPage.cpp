/****************************************************************************
** Meta object code from reading C++ file 'ControlCenterPage.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/ControlCenterPage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControlCenterPage.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17ControlCenterPageE_t {};
} // unnamed namespace

template <> constexpr inline auto ControlCenterPage::qt_create_metaobjectdata<qt_meta_tag_ZN17ControlCenterPageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ControlCenterPage",
        "refreshRequested",
        "",
        "openSettingsRequested",
        "playbackVolumeChanged",
        "deviceId",
        "value",
        "playbackMuteChanged",
        "muted",
        "playbackSetDefaultRequested",
        "playbackTestRequested",
        "recordingVolumeChanged",
        "recordingMuteChanged",
        "recordingSetDefaultRequested"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'refreshRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openSettingsRequested'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'playbackVolumeChanged'
        QtMocHelpers::SignalData<void(const QString &, int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::Int, 6 },
        }}),
        // Signal 'playbackMuteChanged'
        QtMocHelpers::SignalData<void(const QString &, bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::Bool, 8 },
        }}),
        // Signal 'playbackSetDefaultRequested'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'playbackTestRequested'
        QtMocHelpers::SignalData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'recordingVolumeChanged'
        QtMocHelpers::SignalData<void(const QString &, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::Int, 6 },
        }}),
        // Signal 'recordingMuteChanged'
        QtMocHelpers::SignalData<void(const QString &, bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::Bool, 8 },
        }}),
        // Signal 'recordingSetDefaultRequested'
        QtMocHelpers::SignalData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ControlCenterPage, qt_meta_tag_ZN17ControlCenterPageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ControlCenterPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ControlCenterPageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ControlCenterPageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ControlCenterPageE_t>.metaTypes,
    nullptr
} };

void ControlCenterPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ControlCenterPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->refreshRequested(); break;
        case 1: _t->openSettingsRequested(); break;
        case 2: _t->playbackVolumeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->playbackMuteChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->playbackSetDefaultRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->playbackTestRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->recordingVolumeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->recordingMuteChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->recordingSetDefaultRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)()>(_a, &ControlCenterPage::refreshRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)()>(_a, &ControlCenterPage::openSettingsRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)(const QString & , int )>(_a, &ControlCenterPage::playbackVolumeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)(const QString & , bool )>(_a, &ControlCenterPage::playbackMuteChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)(const QString & )>(_a, &ControlCenterPage::playbackSetDefaultRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)(const QString & )>(_a, &ControlCenterPage::playbackTestRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)(const QString & , int )>(_a, &ControlCenterPage::recordingVolumeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)(const QString & , bool )>(_a, &ControlCenterPage::recordingMuteChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlCenterPage::*)(const QString & )>(_a, &ControlCenterPage::recordingSetDefaultRequested, 8))
            return;
    }
}

const QMetaObject *ControlCenterPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlCenterPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ControlCenterPageE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ControlCenterPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ControlCenterPage::refreshRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ControlCenterPage::openSettingsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ControlCenterPage::playbackVolumeChanged(const QString & _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void ControlCenterPage::playbackMuteChanged(const QString & _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void ControlCenterPage::playbackSetDefaultRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void ControlCenterPage::playbackTestRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void ControlCenterPage::recordingVolumeChanged(const QString & _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void ControlCenterPage::recordingMuteChanged(const QString & _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void ControlCenterPage::recordingSetDefaultRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
