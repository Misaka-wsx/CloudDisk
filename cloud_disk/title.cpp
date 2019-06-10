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
	//����������
	if (event->button() == Qt::LeftButton)
	{
		//���ֵ
		m_point = event->globalPos() - this->geometry().topLeft();
	}
}
