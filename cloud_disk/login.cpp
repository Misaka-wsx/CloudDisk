#include "login.h"
#include <QPainter>
login::login(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint|windowFlags());
	
}

login::~login()
{
}

void login::paintEvent(QPaintEvent* event)
{
	QPainter p(this);
	QPixmap pximap(":/image/Resources/image/images/login2.jpg");
	p.drawPixmap(0,0,this->width(),this->height(),pximap);
}
