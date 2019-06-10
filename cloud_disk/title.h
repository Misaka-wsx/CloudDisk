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
	QPoint m_point; //鼠标当前点-窗口左上点
	QWidget* m_parent;
protected:
	//移动窗口
	void mouseMoveEvent(QMouseEvent* event);
	void mousePressEvent(QMouseEvent* event);
signals:
	void show_set_page();

	void close_window();

};
