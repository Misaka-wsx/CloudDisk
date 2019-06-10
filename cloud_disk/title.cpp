#include "title.h"
#include <QMouseEvent>
title::title(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m_parent = parent;
	connect(ui.button_set, &QToolButton::clicked, [=]() {

		emit show_set_page();
		});
	connect(ui.button_min, &QToolButton::clicked, [=]() {

		m_parent->showMinimized();
		});
	connect(ui.button_close, &QToolButton::clicked, [=]() {

		emit close_window();
		});
}

title::~title()
{
}

void title::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton)
	{
		//move 
		m_parent->move(event->globalPos() - m_point);
	}
}

void title::mousePressEvent(QMouseEvent* event)
{
	//����������
	if (event->button() == Qt::LeftButton)
	{
		//���ֵ
		m_point = event->globalPos() - m_parent->geometry().topLeft();
	}
}
