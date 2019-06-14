#include "login.h"
#include <QPainter>
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMap>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkrequest.h>
#include <QtNetwork/qnetworkreply.h>
#include <qcryptographichash.h>
#include "networkmanager.h"
#include "common.h"
#include <QString>
#include <QDebug>
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

void login::on_login_register_clicked()
{
    ui.main_text->setCurrentWidget(ui.reg_page);
}

void login::on_reg_back_main_clicked()
{
    ui.main_text->setCurrentWidget(ui.login_page);
}
//注册功能
void login::on_reg_register_clicked()
{
    //获取用户输入数据
    QString userName=this->ui.reg_username->text();
    QString password=this->ui.reg_password->text();
    QString password_1=this->ui.reg_password_enter->text();
    QString nickName=this->ui.reg_mail->text();
    QString email=this->ui.reg_mail->text();
    QString phone=this->ui.reg_phone->text();
    //定义正则
    QRegExp regName(REG_USER_NAME);
    QRegExp regPasswd(REG_PASSWD);
    QRegExp regPhone(REG_PHONE);
    QRegExp regEmail(REG_EMAIL);
    //验证正则
    if(!regName.exactMatch(userName))
    {
        QMessageBox::critical(this,"用户名错误","用户名命名不符合规则");
        return;
    }
    if(!regName.exactMatch(nickName))
    {
        QMessageBox::critical(this,"昵称错误","昵称命名不符合规则");
        return;
    }
    if(!regPasswd.exactMatch(REG_PASSWD))
    {
        QMessageBox::critical(this,"密码错误","密码不符合规则");
        return;
    }
    if(!regEmail.exactMatch(REG_EMAIL))
    {
        QMessageBox::critical(this,"邮箱错误","邮箱不符合规则");
        return;
    }
    if(!regPhone.exactMatch(REG_PHONE))
    {
        QMessageBox::critical(this,"电话错误","电话不符合规则");
        return;
    }
    if(password!=password_1)
    {
        QMessageBox::critical(this,"密码错误","两次密码输入不一致");
        return;
    }
    //密码使用md5加密
    QCryptographicHash md5(QCryptographicHash::Md5);
    //添加要计算的数据
    md5.addData(password.toUtf8());
    //md5 result;
    auto md5Array=md5.result();
    //transfer to hex
    QString md5Password=md5Array.toHex().data();

    //construct json
    QMap<QString,QVariant> obj;
    obj.insert("userName",userName);
    obj.insert("nickName",nickName);
    obj.insert("password",password);
    obj.insert("phone",phone);
    obj.insert("email",email);

    QNetworkReply *rpl=NetworkManager::getInstance().postObject(CONN_URL,obj);
    //deal connect
    connect(rpl,&QNetworkReply::finished,this,[=](){
        //check network
        do
        {
            if(rpl->error()!=QNetworkReply::NoError)
            {

                qCritical()<<"network,error:"<<rpl->errorString();
                QMessageBox::critical(this,"network,error",rpl->errorString());
                break;
            }
            //no network error, check json
            auto content=rpl->readAll();
            qDebug().noquote()<<"get content"<<content;
            QJsonParseError err;
            QJsonDocument doc=QJsonDocument::fromJson(content,&err);
            if(err.error!=QJsonParseError::NoError)
            {
                //解析json出错
                qCritical()<<"Json parse error:"<<err.errorString();
                QMessageBox::critical(this,"Json解析出错",err.errorString());
                break;
            }
            //check if server return code=0
            QJsonObject obj=doc.object();
            int code=obj.value("code").toInt();
            if(code==0)
            {
                //succecc register
                QMessageBox::information(this,"congratulations!","user register succeed!");
                this->ui.main_text->setCurrentWidget(ui.login_page);//return to main page
                break;
            }
            else if(code==11)
            {
                //user already exist
                QMessageBox::critical(this,"register failed","user already exist");
                break;
            }
            else {
                //other error
                QMessageBox::critical(this,"register failed!","unknown error!");
                break;
            }
        }while(0);
        rpl->deleteLater();
    });
}

void login::on_setting_back_main_clicked()
{
     ui.main_text->setCurrentWidget(ui.login_page);
}
