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
	QPoint m_point; //��굱ǰ��-�������ϵ�
	QWidget* m_parent;
protected:
	//�ƶ�����
	void mouseMoveEvent(QMouseEvent* event);
	void mousePressEvent(QMouseEvent* event);
signals:
	void show_set_page();

	void close_window();

};
