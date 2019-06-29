#pragma once

#include <QWidget>
#include "ui_sharelist.h"

class sharelist : public QWidget
{
	Q_OBJECT

public:
	sharelist(QWidget *parent = Q_NULLPTR);
	~sharelist();

private:
	Ui::sharelist ui;
};
