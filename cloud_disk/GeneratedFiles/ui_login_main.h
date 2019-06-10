/********************************************************************************
** Form generated from reading UI file 'login_main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_MAIN_H
#define UI_LOGIN_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QWidget *widget_2;
    QToolButton *exit_btn_3;
    QToolButton *exit_btn;
    QToolButton *exit_btn_2;
    QWidget *widget_3;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *login;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *login_user;
    QLineEdit *login_pass;
    QLabel *label_4;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *login_btn;
    QWidget *reg;
    QLabel *label_5;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *username;
    QLabel *label_7;
    QLineEdit *nickname;
    QLabel *label_8;
    QLineEdit *password;
    QLabel *label_9;
    QLineEdit *password_enter;
    QLabel *label_10;
    QLineEdit *phone;
    QLabel *label_11;
    QLineEdit *email;
    QPushButton *back_main;
    QPushButton *reg_btn;
    QWidget *page_3;
    QLabel *label_12;
    QWidget *widget_5;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_13;
    QLineEdit *host_ip;
    QLabel *label_14;
    QLineEdit *host_port;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(930, 877);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/login_bk.jpg);"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-1, -1, 961, 601));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 961, 91));
        exit_btn_3 = new QToolButton(widget_2);
        exit_btn_3->setObjectName(QString::fromUtf8("exit_btn_3"));
        exit_btn_3->setGeometry(QRect(670, 0, 91, 81));
        exit_btn_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/login_setting.png);"));
        exit_btn_3->setAutoRaise(false);
        exit_btn = new QToolButton(widget_2);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(870, 0, 91, 81));
        exit_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/login_close.png);\n"
""));
        exit_btn_2 = new QToolButton(widget_2);
        exit_btn_2->setObjectName(QString::fromUtf8("exit_btn_2"));
        exit_btn_2->setGeometry(QRect(770, 0, 91, 81));
        exit_btn_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/login_min.png);"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 0, 91, 81));
        widget_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/logo.ico);"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 141, 61));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#fff"));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(90, 100, 731, 401));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/back_img.jpg);"));
        login = new QWidget();
        login->setObjectName(QString::fromUtf8("login"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 90, 171, 81));
        label_2->setFont(font);
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 170, 61, 16));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        login_user = new QLineEdit(login);
        login_user->setObjectName(QString::fromUtf8("login_user"));
        login_user->setGeometry(QRect(270, 170, 241, 20));
        login_pass = new QLineEdit(login);
        login_pass->setObjectName(QString::fromUtf8("login_pass"));
        login_pass->setGeometry(QRect(270, 200, 241, 20));
        login_pass->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 200, 61, 16));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox = new QCheckBox(login);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(210, 240, 91, 21));
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(404, 240, 111, 23));
        login_btn = new QPushButton(login);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(280, 290, 211, 61));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        login_btn->setFont(font1);
        login_btn->setAutoFillBackground(false);
        login_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/balckButton.png);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(login);
        reg = new QWidget();
        reg->setObjectName(QString::fromUtf8("reg"));
        label_5 = new QLabel(reg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 30, 151, 51));
        label_5->setFont(font);
        widget_4 = new QWidget(reg);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(250, 100, 211, 168));
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        username = new QLineEdit(widget_4);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout->addWidget(username, 0, 1, 1, 1);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        nickname = new QLineEdit(widget_4);
        nickname->setObjectName(QString::fromUtf8("nickname"));

        gridLayout->addWidget(nickname, 1, 1, 1, 1);

        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        password = new QLineEdit(widget_4);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout->addWidget(password, 2, 1, 1, 1);

        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        password_enter = new QLineEdit(widget_4);
        password_enter->setObjectName(QString::fromUtf8("password_enter"));
        password_enter->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout->addWidget(password_enter, 3, 1, 1, 1);

        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        phone = new QLineEdit(widget_4);
        phone->setObjectName(QString::fromUtf8("phone"));

        gridLayout->addWidget(phone, 4, 1, 1, 1);

        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        email = new QLineEdit(widget_4);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout->addWidget(email, 5, 1, 1, 1);

        back_main = new QPushButton(reg);
        back_main->setObjectName(QString::fromUtf8("back_main"));
        back_main->setGeometry(QRect(270, 300, 75, 23));
        reg_btn = new QPushButton(reg);
        reg_btn->setObjectName(QString::fromUtf8("reg_btn"));
        reg_btn->setGeometry(QRect(390, 300, 75, 23));
        stackedWidget->addWidget(reg);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(280, 70, 261, 91));
        label_12->setFont(font);
        widget_5 = new QWidget(page_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(180, 150, 381, 91));
        layoutWidget = new QWidget(widget_5);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 20, 207, 48));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_13);

        host_ip = new QLineEdit(layoutWidget);
        host_ip->setObjectName(QString::fromUtf8("host_ip"));

        formLayout->setWidget(0, QFormLayout::FieldRole, host_ip);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_14);

        host_port = new QLineEdit(layoutWidget);
        host_port->setObjectName(QString::fromUtf8("host_port"));

        formLayout->setWidget(1, QFormLayout::FieldRole, host_port);

        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 270, 75, 23));
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 270, 75, 23));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        exit_btn_3->setText(QApplication::translate("MainWindow", "...", nullptr));
        exit_btn->setText(QApplication::translate("MainWindow", "...", nullptr));
        exit_btn_2->setText(QApplication::translate("MainWindow", "...", nullptr));
        label->setText(QApplication::translate("MainWindow", "\344\274\240\346\231\272\344\272\221\347\233\230", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201:", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\262\241\346\234\211\350\264\246\345\217\267,\351\251\254\344\270\212\346\263\250\345\206\214", nullptr));
        login_btn->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\230\265\347\247\260:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\346\211\213\346\234\272:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\351\202\256\347\256\261:", nullptr));
        back_main->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        reg_btn->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200:", nullptr));
        host_ip->setText(QApplication::translate("MainWindow", "192.168.58.133", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243:", nullptr));
        host_port->setText(QApplication::translate("MainWindow", "80", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_MAIN_H
