#pragma once

#include <QWidget>
#include "ui_transfer.h"

class transfer : public QWidget
{
	Q_OBJECT

public:
	transfer(QWidget *parent = Q_NULLPTR);
	~transfer();

private:
	Ui::transfer ui;
};
