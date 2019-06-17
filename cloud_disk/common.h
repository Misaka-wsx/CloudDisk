#pragma once
#include <QtWinExtras/QtWin>
#include <QIcon>
#include <QFileIconProvider>
#include <QTemporaryFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <windows.h>
#include <QJsonArray>
#include <QJsonParseError>
#include <QObject>
#include <QPixmap>
#include <QtWin>
constexpr auto REG_USER_NAME = "^\\w{5,32}$";
constexpr auto REG_PASSWD = "^\\w{6,16}$";
constexpr auto REG_PHONE = "^\\d{11}$";
constexpr auto REG_EMAIL = "^[\\w!#$%&'*+/=?^_`{|}~-]+(?:\\.[\\w!#$%&'*+/=?^_`{|}~-]+)*@(?:[\\w](?:[\\w-]*[\\w])?\\.)+[\\w](?:[\\w-]*[\\w])?$";
constexpr auto CONN_URL = "http://192.168.177.170/reg";
