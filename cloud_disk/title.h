#pragma once

#include <QWidget>
#include "ui_title.h"

class title : public QWidget
{
	Q_OBJECT

public:
	title(QWidget *parent = Q_NULLPTR);
	~title();

private:
	Ui::title ui;
};
