#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_cloud_disk.h"

class cloud_disk : public QMainWindow
{
	Q_OBJECT

public:
	cloud_disk(QWidget *parent = Q_NULLPTR);

private:
	Ui::cloud_diskClass ui;
};
