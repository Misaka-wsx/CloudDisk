#pragma once

#include <QDialog>
#include "ui_login.h"

class login : public QDialog
{
	Q_OBJECT

public:
	login(QWidget *parent = Q_NULLPTR);
	~login();

private:
	Ui::login ui;
protected:
	void paintEvent(QPaintEvent* event);
private slots:
    void on_login_register_clicked();
    void on_reg_back_main_clicked();
    void on_reg_register_clicked();
    void on_setting_back_main_clicked();
};
