#pragma once
#include <QDialog>
#include "ui_login.h"
#include "config.h"
#include <QString>
#include <QPainter>
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMap>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkrequest.h>
#include <QtNetwork/qnetworkreply.h>
#include <qcryptographichash.h>
#include "networkmanager.h"
#include "common.h"
#include <QDebug>
#include "cloud_disk.h"
class login : public QDialog
{
	Q_OBJECT

public:
	login(QWidget *parent = Q_NULLPTR);
	~login();
    void set_config(Config* temp_config);


private:
    Ui::login ui;
    QString host;
    QString ip;
    QString port;
    Config *config;
    QNetworkAccessManager *net_manger;
    QString token;
protected:
	void paintEvent(QPaintEvent* event);
private slots:
    void on_login_register_clicked();
    void on_reg_back_main_clicked();
    void on_reg_register_clicked();
    void on_setting_back_main_clicked();
    void on_login_enter_clicked();
    void window_change();
};
