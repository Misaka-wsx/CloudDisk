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
#include <title.h>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout;
    title *title_wg;
    QStackedWidget *main_text;
    QWidget *login_page;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *title1;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *username_input;
    QLabel *password;
    QLabel *username;
    QLineEdit *password_input;
    QWidget *widget_3;
    QCheckBox *checkBox_rmpswd;
    QToolButton *register_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *enter;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *reg_page;
    QWidget *set_page;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        verticalLayout = new QVBoxLayout(login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title_wg = new title(login);
        title_wg->setObjectName(QString::fromUtf8("title_wg"));

        verticalLayout->addWidget(title_wg);

        main_text = new QStackedWidget(login);
        main_text->setObjectName(QString::fromUtf8("main_text"));
        login_page = new QWidget();
        login_page->setObjectName(QString::fromUtf8("login_page"));
        widget = new QWidget(login_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 10, 223, 227));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        title1 = new QLabel(widget);
        title1->setObjectName(QString::fromUtf8("title1"));

        verticalLayout_2->addWidget(title1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        username_input = new QLineEdit(widget_2);
        username_input->setObjectName(QString::fromUtf8("username_input"));

        gridLayout_2->addWidget(username_input, 0, 1, 1, 1);

        password = new QLabel(widget_2);
        password->setObjectName(QString::fromUtf8("password"));

        gridLayout_2->addWidget(password, 1, 0, 1, 1);

        username = new QLabel(widget_2);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout_2->addWidget(username, 0, 0, 1, 1);

        password_input = new QLineEdit(widget_2);
        password_input->setObjectName(QString::fromUtf8("password_input"));

        gridLayout_2->addWidget(password_input, 1, 1, 1, 1);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        checkBox_rmpswd = new QCheckBox(widget_3);
        checkBox_rmpswd->setObjectName(QString::fromUtf8("checkBox_rmpswd"));
        checkBox_rmpswd->setGeometry(QRect(10, 10, 71, 16));
        register_2 = new QToolButton(widget_3);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        register_2->setGeometry(QRect(170, 10, 37, 18));

        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(73, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        enter = new QToolButton(widget_4);
        enter->setObjectName(QString::fromUtf8("enter"));

        horizontalLayout->addWidget(enter);

        horizontalSpacer_2 = new QSpacerItem(73, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_4);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        main_text->addWidget(login_page);
        reg_page = new QWidget();
        reg_page->setObjectName(QString::fromUtf8("reg_page"));
        main_text->addWidget(reg_page);
        set_page = new QWidget();
        set_page->setObjectName(QString::fromUtf8("set_page"));
        main_text->addWidget(set_page);

        verticalLayout->addWidget(main_text);


        retranslateUi(login);

        main_text->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        title1->setText(QApplication::translate("login", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        password->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        username->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        checkBox_rmpswd->setText(QApplication::translate("login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        register_2->setText(QApplication::translate("login", "...", nullptr));
        enter->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
