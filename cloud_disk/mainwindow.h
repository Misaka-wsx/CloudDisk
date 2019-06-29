#pragma once

#include <QMainWindow>
#include "ui_mainwindow.h"

class mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	mainwindow(QWidget *parent = Q_NULLPTR);
	~mainwindow();

private:
	Ui::mainwindow ui;
};
