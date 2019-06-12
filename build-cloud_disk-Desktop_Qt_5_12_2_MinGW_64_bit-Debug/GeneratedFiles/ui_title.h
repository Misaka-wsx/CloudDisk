/********************************************************************************
** Form generated from reading UI file 'title.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLE_H
#define UI_TITLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_title
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QLabel *wgtitle;
    QSpacerItem *horizontalSpacer;
    QToolButton *button_set;
    QToolButton *button_min;
    QToolButton *button_close;

    void setupUi(QWidget *title)
    {
        if (title->objectName().isEmpty())
            title->setObjectName(QString::fromUtf8("title"));
        title->resize(578, 89);
        horizontalLayout = new QHBoxLayout(title);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        logo = new QLabel(title);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/image/Resources/image/images/logo.ico")));

        horizontalLayout->addWidget(logo);

        wgtitle = new QLabel(title);
        wgtitle->setObjectName(QString::fromUtf8("wgtitle"));

        horizontalLayout->addWidget(wgtitle);

        horizontalSpacer = new QSpacerItem(304, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        button_set = new QToolButton(title);
        button_set->setObjectName(QString::fromUtf8("button_set"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/Resources/image/images/login_setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_set->setIcon(icon);
        button_set->setIconSize(QSize(32, 32));
        button_set->setAutoRaise(true);

        horizontalLayout->addWidget(button_set);

        button_min = new QToolButton(title);
        button_min->setObjectName(QString::fromUtf8("button_min"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/Resources/image/images/title_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_min->setIcon(icon1);
        button_min->setIconSize(QSize(32, 32));
        button_min->setAutoRaise(true);

        horizontalLayout->addWidget(button_min);

        button_close = new QToolButton(title);
        button_close->setObjectName(QString::fromUtf8("button_close"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/Resources/image/images/login_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_close->setIcon(icon2);
        button_close->setIconSize(QSize(32, 32));
        button_close->setAutoRaise(true);

        horizontalLayout->addWidget(button_close);


        retranslateUi(title);

        QMetaObject::connectSlotsByName(title);
    } // setupUi

    void retranslateUi(QWidget *title)
    {
        title->setWindowTitle(QApplication::translate("title", "Form", nullptr));
        logo->setText(QString());
        wgtitle->setText(QApplication::translate("title", "\347\231\276\345\272\246\344\272\221\347\233\230", nullptr));
        button_set->setText(QApplication::translate("title", "...", nullptr));
        button_min->setText(QApplication::translate("title", "...", nullptr));
        button_close->setText(QApplication::translate("title", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class title: public Ui_title {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLE_H
