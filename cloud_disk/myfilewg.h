#pragma once

#include <QWidget>
#include "ui_myfilewg.h"

class myfilewg : public QWidget
{
	Q_OBJECT

public:
	myfilewg(QWidget *parent = Q_NULLPTR);
	~myfilewg();

private:
	Ui::myfilewg ui;
};
