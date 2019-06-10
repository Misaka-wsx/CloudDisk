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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <title.h>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QStackedWidget *main_text;
    QWidget *login_page;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *password;
    QLineEdit *username_input;
    QLabel *username;
    QLineEdit *password_input;
    QLabel *title1;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_rmpswd;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *register_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *enter;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *reg_page;
    QLabel *label_15;
    QPushButton *back_main_2;
    QPushButton *reg_btn_2;
    QWidget *widget_7;
    QGridLayout *gridLayout_3;
    QLabel *label_16;
    QLineEdit *username_3;
    QLabel *label_17;
    QLineEdit *nickname_2;
    QLabel *label_18;
    QLineEdit *password_3;
    QLabel *label_19;
    QLineEdit *password_enter_2;
    QLabel *label_20;
    QLineEdit *phone_2;
    QLabel *label_21;
    QLineEdit *email_2;
    QWidget *set_page;
    QLabel *label_48;
    QWidget *widget_8;
    QWidget *layoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_49;
    QLineEdit *host_ip_4;
    QLabel *label_50;
    QLineEdit *host_port_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    title *title_wg;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(649, 515);
        main_text = new QStackedWidget(login);
        main_text->setObjectName(QString::fromUtf8("main_text"));
        main_text->setGeometry(QRect(130, 133, 411, 304));
        login_page = new QWidget();
        login_page->setObjectName(QString::fromUtf8("login_page"));
        verticalLayout = new QVBoxLayout(login_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        widget = new QWidget(login_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        password = new QLabel(widget_2);
        password->setObjectName(QString::fromUtf8("password"));

        gridLayout_2->addWidget(password, 2, 0, 1, 1);

        username_input = new QLineEdit(widget_2);
        username_input->setObjectName(QString::fromUtf8("username_input"));

        gridLayout_2->addWidget(username_input, 1, 1, 1, 1);

        username = new QLabel(widget_2);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout_2->addWidget(username, 1, 0, 1, 1);

        password_input = new QLineEdit(widget_2);
        password_input->setObjectName(QString::fromUtf8("password_input"));

        gridLayout_2->addWidget(password_input, 2, 1, 1, 1);

        title1 = new QLabel(widget_2);
        title1->setObjectName(QString::fromUtf8("title1"));
        title1->setLayoutDirection(Qt::LeftToRight);
        title1->setMidLineWidth(0);
        title1->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(title1, 0, 1, 1, 1);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_rmpswd = new QCheckBox(widget_3);
        checkBox_rmpswd->setObjectName(QString::fromUtf8("checkBox_rmpswd"));

        horizontalLayout->addWidget(checkBox_rmpswd);

        horizontalSpacer_3 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        register_2 = new QToolButton(widget_3);
        register_2->setObjectName(QString::fromUtf8("register_2"));

        horizontalLayout->addWidget(register_2);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        enter = new QToolButton(widget_4);
        enter->setObjectName(QString::fromUtf8("enter"));

        horizontalLayout_2->addWidget(enter);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_6->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        verticalLayout->addLayout(verticalLayout_6);

        main_text->addWidget(login_page);
        reg_page = new QWidget();
        reg_page->setObjectName(QString::fromUtf8("reg_page"));
        label_15 = new QLabel(reg_page);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(90, 10, 151, 51));
        QFont font;
        font.setPointSize(26);
        label_15->setFont(font);
        back_main_2 = new QPushButton(reg_page);
        back_main_2->setObjectName(QString::fromUtf8("back_main_2"));
        back_main_2->setGeometry(QRect(80, 260, 75, 23));
        reg_btn_2 = new QPushButton(reg_page);
        reg_btn_2->setObjectName(QString::fromUtf8("reg_btn_2"));
        reg_btn_2->setGeometry(QRect(200, 260, 75, 23));
        widget_7 = new QWidget(reg_page);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(60, 60, 211, 168));
        gridLayout_3 = new QGridLayout(widget_7);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_16 = new QLabel(widget_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        username_3 = new QLineEdit(widget_7);
        username_3->setObjectName(QString::fromUtf8("username_3"));

        gridLayout_3->addWidget(username_3, 0, 1, 1, 1);

        label_17 = new QLabel(widget_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 1, 0, 1, 1);

        nickname_2 = new QLineEdit(widget_7);
        nickname_2->setObjectName(QString::fromUtf8("nickname_2"));

        gridLayout_3->addWidget(nickname_2, 1, 1, 1, 1);

        label_18 = new QLabel(widget_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 2, 0, 1, 1);

        password_3 = new QLineEdit(widget_7);
        password_3->setObjectName(QString::fromUtf8("password_3"));
        password_3->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_3->addWidget(password_3, 2, 1, 1, 1);

        label_19 = new QLabel(widget_7);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 3, 0, 1, 1);

        password_enter_2 = new QLineEdit(widget_7);
        password_enter_2->setObjectName(QString::fromUtf8("password_enter_2"));
        password_enter_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_3->addWidget(password_enter_2, 3, 1, 1, 1);

        label_20 = new QLabel(widget_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 4, 0, 1, 1);

        phone_2 = new QLineEdit(widget_7);
        phone_2->setObjectName(QString::fromUtf8("phone_2"));

        gridLayout_3->addWidget(phone_2, 4, 1, 1, 1);

        label_21 = new QLabel(widget_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 5, 0, 1, 1);

        email_2 = new QLineEdit(widget_7);
        email_2->setObjectName(QString::fromUtf8("email_2"));

        gridLayout_3->addWidget(email_2, 5, 1, 1, 1);

        main_text->addWidget(reg_page);
        set_page = new QWidget();
        set_page->setObjectName(QString::fromUtf8("set_page"));
        label_48 = new QLabel(set_page);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(60, 0, 261, 91));
        label_48->setFont(font);
        widget_8 = new QWidget(set_page);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(10, 70, 331, 91));
        layoutWidget_4 = new QWidget(widget_8);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(100, 20, 207, 48));
        formLayout_4 = new QFormLayout(layoutWidget_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_49 = new QLabel(layoutWidget_4);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_49);

        host_ip_4 = new QLineEdit(layoutWidget_4);
        host_ip_4->setObjectName(QString::fromUtf8("host_ip_4"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, host_ip_4);

        label_50 = new QLabel(layoutWidget_4);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_50);

        host_port_4 = new QLineEdit(layoutWidget_4);
        host_port_4->setObjectName(QString::fromUtf8("host_port_4"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, host_port_4);

        pushButton_10 = new QPushButton(set_page);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(110, 200, 75, 23));
        pushButton_11 = new QPushButton(set_page);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(220, 200, 75, 23));
        main_text->addWidget(set_page);
        title_wg = new title(login);
        title_wg->setObjectName(QString::fromUtf8("title_wg"));
        title_wg->setGeometry(QRect(10, 20, 621, 41));

        retranslateUi(login);

        main_text->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        password->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        username->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        title1->setText(QApplication::translate("login", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        checkBox_rmpswd->setText(QApplication::translate("login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        register_2->setText(QApplication::translate("login", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        enter->setText(QApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        label_15->setText(QApplication::translate("login", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        back_main_2->setText(QApplication::translate("login", "\350\277\224\345\233\236", nullptr));
        reg_btn_2->setText(QApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        label_16->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_17->setText(QApplication::translate("login", "\346\230\265\347\247\260:", nullptr));
        label_18->setText(QApplication::translate("login", "\345\257\206\347\240\201:", nullptr));
        label_19->setText(QApplication::translate("login", "\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
        label_20->setText(QApplication::translate("login", "\346\211\213\346\234\272:", nullptr));
        label_21->setText(QApplication::translate("login", "\351\202\256\347\256\261:", nullptr));
        label_48->setText(QApplication::translate("login", "\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", nullptr));
        label_49->setText(QApplication::translate("login", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200:", nullptr));
        host_ip_4->setText(QApplication::translate("login", "192.168.58.133", nullptr));
        label_50->setText(QApplication::translate("login", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243:", nullptr));
        host_port_4->setText(QApplication::translate("login", "80", nullptr));
        pushButton_10->setText(QApplication::translate("login", "\350\277\224\345\233\236", nullptr));
        pushButton_11->setText(QApplication::translate("login", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
