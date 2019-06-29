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
};
