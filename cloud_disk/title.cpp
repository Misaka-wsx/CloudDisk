#include "title.h"
#include <QMouseEvent>
title::title(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m_parent = parent;
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
