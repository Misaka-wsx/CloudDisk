#pragma once

#include <QtWidgets/QWidget>
#include "ui_cloud_disk.h"

class cloud_disk : public QWidget
{
	Q_OBJECT

public:
	cloud_disk(QWidget *parent = Q_NULLPTR);

private:
	Ui::cloud_diskClass ui;
};
