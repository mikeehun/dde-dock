/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusHideStateManager -p dbushidestatemanager dde.dock.HideStateManager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSHIDESTATEMANAGER_H_1436862485
#define DBUSHIDESTATEMANAGER_H_1436862485

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface dde.dock.HideStateManager
 */
class DBusHideStateManager: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticServerPath()
    { return "com.deepin.daemon.Dock"; }
    static inline const char *staticInterfacePath()
    { return "/dde/dock/HideStateManager"; }
    static inline const char *staticInterfaceName()
    { return "dde.dock.HideStateManager"; }

public:
    DBusHideStateManager(QObject *parent = 0);

    ~DBusHideStateManager();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> CancelToggleShow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("CancelToggleShow"), argumentList);
    }

    inline QDBusPendingReply<int> SetState(int in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("SetState"), argumentList);
    }

    inline QDBusPendingReply<> ToggleShow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("ToggleShow"), argumentList);
    }

    inline QDBusPendingReply<> UpdateState()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("UpdateState"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ChangeState(int in0);
};

namespace dde {
  namespace dock {
    typedef ::DBusHideStateManager HideStateManager;
  }
}
#endif