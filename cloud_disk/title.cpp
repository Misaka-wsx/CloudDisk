#include "title.h"
#include <QMouseEvent>
title::title(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

title::~title()
{
}

void title::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton)
	{
		//move 
		move(event->globalPos() - m_point);
	}
}

void title::mousePressEvent(QMouseEvent* event)
{
	//如果左键按下
	if (event->button() == Qt::LeftButton)
	{
		//求差值
		m_point = event->globalPos() - this->geometry().topLeft();
	}
}
