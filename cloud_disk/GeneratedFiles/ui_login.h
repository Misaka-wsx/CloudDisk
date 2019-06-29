/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <selfwidget/titlewidget.h>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    TitleWidget *title_widget;
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QWidget *widget_7;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *log_usr;
    QLineEdit *log_pwd;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *rember_pwd;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *log_register_btn;
    QSpacerItem *horizontalSpacer_12;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout;
    QToolButton *login_btn;
    QWidget *widget_8;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *register_page;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QWidget *widget_13;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_9;
    QLineEdit *reg_phone;
    QLineEdit *reg_surepwd;
    QLabel *label_8;
    QLineEdit *reg_mail;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *reg_nickname;
    QLineEdit *reg_pwd;
    QLabel *label_6;
    QLineEdit *reg_usr;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *register_btn;
    QWidget *widget_16;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QWidget *set_page;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QWidget *widget_18;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *address_server;
    QLabel *label_15;
    QLineEdit *port_server;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_8;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *set_ok_btn;
    QWidget *widget_20;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(827, 624);
        Login->setMinimumSize(QSize(640, 480));
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        title_widget = new TitleWidget(Login);
        title_widget->setObjectName(QString::fromUtf8("title_widget"));

        verticalLayout->addWidget(title_widget);

        stackedWidget = new QStackedWidget(Login);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        login_page = new QWidget();
        login_page->setObjectName(QString::fromUtf8("login_page"));
        verticalLayout_3 = new QVBoxLayout(login_page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widget = new QWidget(login_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(0, 15));

        verticalLayout_2->addWidget(widget_7);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        log_usr = new QLineEdit(widget_3);
        log_usr->setObjectName(QString::fromUtf8("log_usr"));
        log_usr->setMinimumSize(QSize(0, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Aharoni"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        log_usr->setFont(font2);
        log_usr->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(log_usr, 0, 2, 1, 1);

        log_pwd = new QLineEdit(widget_3);
        log_pwd->setObjectName(QString::fromUtf8("log_pwd"));
        log_pwd->setMinimumSize(QSize(0, 25));
        log_pwd->setFont(font2);
        log_pwd->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(log_pwd, 2, 2, 1, 1);

        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        rember_pwd = new QCheckBox(widget_4);
        rember_pwd->setObjectName(QString::fromUtf8("rember_pwd"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        rember_pwd->setFont(font3);

        horizontalLayout_2->addWidget(rember_pwd);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        log_register_btn = new QToolButton(widget_4);
        log_register_btn->setObjectName(QString::fromUtf8("log_register_btn"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        font4.setStyleStrategy(QFont::PreferDefault);
        log_register_btn->setFont(font4);
        log_register_btn->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));
        log_register_btn->setAutoRaise(true);

        horizontalLayout_2->addWidget(log_register_btn);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);


        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout = new QHBoxLayout(widget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        login_btn = new QToolButton(widget_5);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setMinimumSize(QSize(200, 50));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font5.setPointSize(18);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        login_btn->setFont(font5);
        login_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/images/balckButton.png);\n"
"font: 75 18pt \"\346\226\260\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        login_btn->setAutoRaise(true);

        horizontalLayout->addWidget(login_btn);


        verticalLayout_2->addWidget(widget_5);

        widget_8 = new QWidget(widget_2);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setMinimumSize(QSize(0, 15));

        verticalLayout_2->addWidget(widget_8);


        horizontalLayout_3->addWidget(widget_2);

        horizontalSpacer_2 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidget->addWidget(login_page);
        register_page = new QWidget();
        register_page->setObjectName(QString::fromUtf8("register_page"));
        verticalLayout_5 = new QVBoxLayout(register_page);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_5 = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        widget_9 = new QWidget(register_page);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_5 = new QHBoxLayout(widget_9);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        verticalLayout_4 = new QVBoxLayout(widget_10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_6 = new QHBoxLayout(widget_11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(widget_11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font6.setPointSize(26);
        font6.setBold(true);
        font6.setWeight(75);
        label_4->setFont(font6);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_4);


        verticalLayout_4->addWidget(widget_11);

        widget_13 = new QWidget(widget_10);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        gridLayout_2 = new QGridLayout(widget_13);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(widget_13);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 5, 0, 1, 1);

        label_9 = new QLabel(widget_13);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 4, 0, 1, 1);

        reg_phone = new QLineEdit(widget_13);
        reg_phone->setObjectName(QString::fromUtf8("reg_phone"));
        reg_phone->setMinimumSize(QSize(0, 25));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        reg_phone->setFont(font7);
        reg_phone->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(reg_phone, 4, 2, 1, 1);

        reg_surepwd = new QLineEdit(widget_13);
        reg_surepwd->setObjectName(QString::fromUtf8("reg_surepwd"));
        reg_surepwd->setMinimumSize(QSize(0, 25));
        reg_surepwd->setFont(font7);
        reg_surepwd->setEchoMode(QLineEdit::Password);
        reg_surepwd->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(reg_surepwd, 3, 2, 1, 1);

        label_8 = new QLabel(widget_13);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        reg_mail = new QLineEdit(widget_13);
        reg_mail->setObjectName(QString::fromUtf8("reg_mail"));
        reg_mail->setMinimumSize(QSize(0, 25));
        reg_mail->setFont(font7);
        reg_mail->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(reg_mail, 5, 2, 1, 1);

        label_5 = new QLabel(widget_13);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_7 = new QLabel(widget_13);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        reg_nickname = new QLineEdit(widget_13);
        reg_nickname->setObjectName(QString::fromUtf8("reg_nickname"));
        reg_nickname->setMinimumSize(QSize(0, 25));
        reg_nickname->setFont(font7);
        reg_nickname->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(reg_nickname, 1, 2, 1, 1);

        reg_pwd = new QLineEdit(widget_13);
        reg_pwd->setObjectName(QString::fromUtf8("reg_pwd"));
        reg_pwd->setMinimumSize(QSize(0, 25));
        reg_pwd->setFont(font7);
        reg_pwd->setEchoMode(QLineEdit::Password);
        reg_pwd->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(reg_pwd, 2, 2, 1, 1);

        label_6 = new QLabel(widget_13);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        reg_usr = new QLineEdit(widget_13);
        reg_usr->setObjectName(QString::fromUtf8("reg_usr"));
        reg_usr->setMinimumSize(QSize(0, 25));
        reg_usr->setFont(font7);
        reg_usr->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(reg_usr, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        verticalLayout_4->addWidget(widget_13);

        widget_15 = new QWidget(widget_10);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        horizontalLayout_8 = new QHBoxLayout(widget_15);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        register_btn = new QToolButton(widget_15);
        register_btn->setObjectName(QString::fromUtf8("register_btn"));
        register_btn->setMinimumSize(QSize(200, 50));
        register_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/images/balckButton.png);\n"
"font: 75 18pt \"\346\226\260\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        register_btn->setAutoRaise(true);

        horizontalLayout_8->addWidget(register_btn);


        verticalLayout_4->addWidget(widget_15);

        widget_16 = new QWidget(widget_10);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setMinimumSize(QSize(0, 15));

        verticalLayout_4->addWidget(widget_16);


        horizontalLayout_5->addWidget(widget_10);

        horizontalSpacer_8 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_5->addWidget(widget_9);

        verticalSpacer_4 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        stackedWidget->addWidget(register_page);
        set_page = new QWidget();
        set_page->setObjectName(QString::fromUtf8("set_page"));
        widget_12 = new QWidget(set_page);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(31, 31, 622, 388));
        horizontalLayout_7 = new QHBoxLayout(widget_12);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        widget_14 = new QWidget(widget_12);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        verticalLayout_6 = new QVBoxLayout(widget_14);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_17 = new QWidget(widget_14);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        horizontalLayout_9 = new QHBoxLayout(widget_17);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(widget_17);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font6);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_11);


        verticalLayout_6->addWidget(widget_17);

        widget_18 = new QWidget(widget_14);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        gridLayout_3 = new QGridLayout(widget_18);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        address_server = new QLineEdit(widget_18);
        address_server->setObjectName(QString::fromUtf8("address_server"));
        address_server->setMinimumSize(QSize(0, 25));
        address_server->setFont(font7);
        address_server->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(address_server, 0, 2, 1, 1);

        label_15 = new QLabel(widget_18);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 0, 0, 1, 1);

        port_server = new QLineEdit(widget_18);
        port_server->setObjectName(QString::fromUtf8("port_server"));
        port_server->setMinimumSize(QSize(0, 25));
        port_server->setFont(font7);
        port_server->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(port_server, 2, 2, 1, 1);

        label_17 = new QLabel(widget_18);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 2, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_8, 1, 0, 1, 1);


        verticalLayout_6->addWidget(widget_18);

        widget_19 = new QWidget(widget_14);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        horizontalLayout_10 = new QHBoxLayout(widget_19);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        set_ok_btn = new QToolButton(widget_19);
        set_ok_btn->setObjectName(QString::fromUtf8("set_ok_btn"));
        set_ok_btn->setMinimumSize(QSize(200, 50));
        set_ok_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/images/balckButton.png);\n"
"font: 75 18pt \"\346\226\260\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        set_ok_btn->setAutoRaise(true);

        horizontalLayout_10->addWidget(set_ok_btn);


        verticalLayout_6->addWidget(widget_19);

        widget_20 = new QWidget(widget_14);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        widget_20->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(widget_20);


        horizontalLayout_7->addWidget(widget_14);

        horizontalSpacer_10 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        stackedWidget->addWidget(set_page);

        verticalLayout->addWidget(stackedWidget);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(log_pwd);
        label->setBuddy(log_usr);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(log_usr, log_pwd);
        QWidget::setTabOrder(log_pwd, rember_pwd);
        QWidget::setTabOrder(rember_pwd, log_register_btn);
        QWidget::setTabOrder(log_register_btn, login_btn);
        QWidget::setTabOrder(login_btn, reg_usr);
        QWidget::setTabOrder(reg_usr, reg_nickname);
        QWidget::setTabOrder(reg_nickname, reg_pwd);
        QWidget::setTabOrder(reg_pwd, reg_surepwd);
        QWidget::setTabOrder(reg_surepwd, reg_phone);
        QWidget::setTabOrder(reg_phone, reg_mail);
        QWidget::setTabOrder(reg_mail, register_btn);
        QWidget::setTabOrder(register_btn, address_server);
        QWidget::setTabOrder(address_server, port_server);
        QWidget::setTabOrder(port_server, set_ok_btn);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        label_3->setText(QApplication::translate("Login", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201:", nullptr));
        label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215:", nullptr));
        rember_pwd->setText(QApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        log_register_btn->setText(QApplication::translate("Login", "\346\262\241\346\234\211\350\264\246\345\217\267,\351\251\254\344\270\212\346\263\250\345\206\214", nullptr));
        login_btn->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        label_4->setText(QApplication::translate("Login", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label_10->setText(QApplication::translate("Login", "\351\202\256  \347\256\261\357\274\232", nullptr));
        label_9->setText(QApplication::translate("Login", "\346\211\213  \346\234\272\357\274\232", nullptr));
        label_8->setText(QApplication::translate("Login", "\347\241\256\345\256\232\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_7->setText(QApplication::translate("Login", "\345\257\206  \347\240\201\357\274\232", nullptr));
        label_6->setText(QApplication::translate("Login", "\346\230\265  \347\247\260\357\274\232", nullptr));
        register_btn->setText(QApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        label_11->setText(QApplication::translate("Login", "\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", nullptr));
        label_15->setText(QApplication::translate("Login", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200:", nullptr));
        label_17->setText(QApplication::translate("Login", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243:", nullptr));
        set_ok_btn->setText(QApplication::translate("Login", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
