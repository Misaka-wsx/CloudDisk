#pragma once

#include <QtWidgets/QWidget>
#include <QMainWindow>
#include "ui_cloud_disk.h"
#include "login.h"
#include <QFileDialog>
#include "tools.h"
class cloud_disk : public QMainWindow
{
	Q_OBJECT

public:
    explicit cloud_disk(QWidget *parent = Q_NULLPTR);
    ~cloud_disk();
    void set_config(Config *temp_config);

private slots:
    void onMyFilesClicked();
    void uploadButton();
    void on_switch_user_clicked();

private:
    Ui::cloud_disk *ui;
    void checkFileMd5(QString filename,QString fileMd5String);
    void uploadFile(QString filename);
    void flushTable(QJsonDocument json);
    void addUploadButton();
private:
    QNetworkAccessManager *netManger;
    Config *config;
};
