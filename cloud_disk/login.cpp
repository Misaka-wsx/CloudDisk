#include "login.h"
#include <QPainter>
login::login(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint|windowFlags());
	connect(ui.title_wg, &title::show_set_page, [=]() {
		ui.main_text->setCurrentWidget(ui.set_page);

		});
	connect(ui.title_wg, &title::close_window, [=]() {
		// check if current widget is login page
		if (ui.main_text->currentWidget() == ui.set_page)
		{
			ui.main_text->setCurrentWidget(ui.login_page);
		}
		else if (ui.main_text->currentWidget() == ui.reg_page)
		{
			ui.main_text->setCurrentWidget(ui.login_page);
		}
		else
		{
			this->close();
		}
		});
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

void login::on_register_2_clicked()
{
	ui.main_text->setCurrentWidget(ui.reg_page);
}
