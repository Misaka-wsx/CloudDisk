#pragma once

#include <QWidget>
#include "ui_rankinglist.h"

class rankinglist : public QWidget
{
	Q_OBJECT

public:
	rankinglist(QWidget *parent = Q_NULLPTR);
	~rankinglist();

private:
	Ui::rankinglist ui;
};
