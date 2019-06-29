/********************************************************************************
** Form generated from reading UI file 'buttongroup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONGROUP_H
#define UI_BUTTONGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonGroup
{
public:
    QHBoxLayout *horizontalLayout_3;
    QWidget *btns_wg;
    QHBoxLayout *horizontalLayout;
    QToolButton *login_usr;
    QToolButton *myfile;
    QToolButton *sharelist;
    QToolButton *download;
    QToolButton *transform;
    QToolButton *switchuser;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *min;
    QToolButton *max;
    QToolButton *close;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ButtonGroup)
    {
        if (ButtonGroup->objectName().isEmpty())
            ButtonGroup->setObjectName(QString::fromUtf8("ButtonGroup"));
        ButtonGroup->resize(778, 115);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonGroup->sizePolicy().hasHeightForWidth());
        ButtonGroup->setSizePolicy(sizePolicy);
        ButtonGroup->setMaximumSize(QSize(16777215, 115));
        horizontalLayout_3 = new QHBoxLayout(ButtonGroup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(9, 9, 9, 9);
        btns_wg = new QWidget(ButtonGroup);
        btns_wg->setObjectName(QString::fromUtf8("btns_wg"));
        horizontalLayout = new QHBoxLayout(btns_wg);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        login_usr = new QToolButton(btns_wg);
        login_usr->setObjectName(QString::fromUtf8("login_usr"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font.setPointSize(12);
        login_usr->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/title_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        login_usr->setIcon(icon);
        login_usr->setIconSize(QSize(70, 70));
        login_usr->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        login_usr->setAutoRaise(true);

        horizontalLayout->addWidget(login_usr);

        myfile = new QToolButton(btns_wg);
        myfile->setObjectName(QString::fromUtf8("myfile"));
        myfile->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/tile_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        myfile->setIcon(icon1);
        myfile->setIconSize(QSize(50, 50));
        myfile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        myfile->setAutoRaise(true);

        horizontalLayout->addWidget(myfile);

        sharelist = new QToolButton(btns_wg);
        sharelist->setObjectName(QString::fromUtf8("sharelist"));
        sharelist->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/title_share.png"), QSize(), QIcon::Normal, QIcon::Off);
        sharelist->setIcon(icon2);
        sharelist->setIconSize(QSize(50, 50));
        sharelist->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        sharelist->setAutoRaise(true);

        horizontalLayout->addWidget(sharelist);

        download = new QToolButton(btns_wg);
        download->setObjectName(QString::fromUtf8("download"));
        download->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/tile_hot.png"), QSize(), QIcon::Normal, QIcon::Off);
        download->setIcon(icon3);
        download->setIconSize(QSize(50, 50));
        download->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        download->setAutoRaise(true);

        horizontalLayout->addWidget(download);

        transform = new QToolButton(btns_wg);
        transform->setObjectName(QString::fromUtf8("transform"));
        transform->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/title_data.png"), QSize(), QIcon::Normal, QIcon::Off);
        transform->setIcon(icon4);
        transform->setIconSize(QSize(50, 50));
        transform->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        transform->setAutoRaise(true);

        horizontalLayout->addWidget(transform);

        switchuser = new QToolButton(btns_wg);
        switchuser->setObjectName(QString::fromUtf8("switchuser"));
        switchuser->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/title_change.png"), QSize(), QIcon::Normal, QIcon::Off);
        switchuser->setIcon(icon5);
        switchuser->setIconSize(QSize(50, 50));
        switchuser->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        switchuser->setAutoRaise(true);

        horizontalLayout->addWidget(switchuser);


        horizontalLayout_3->addWidget(btns_wg);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        widget_2 = new QWidget(ButtonGroup);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        min = new QToolButton(widget_3);
        min->setObjectName(QString::fromUtf8("min"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/title_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        min->setIcon(icon6);
        min->setIconSize(QSize(30, 30));
        min->setAutoRaise(true);

        horizontalLayout_2->addWidget(min);

        max = new QToolButton(widget_3);
        max->setObjectName(QString::fromUtf8("max"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/title_max.png"), QSize(), QIcon::Normal, QIcon::Off);
        max->setIcon(icon7);
        max->setIconSize(QSize(30, 30));
        max->setAutoRaise(true);

        horizontalLayout_2->addWidget(max);

        close = new QToolButton(widget_3);
        close->setObjectName(QString::fromUtf8("close"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/title_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon8);
        close->setIconSize(QSize(30, 30));
        close->setAutoRaise(true);

        horizontalLayout_2->addWidget(close);


        verticalLayout->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(20, 75, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(widget_2);


        retranslateUi(ButtonGroup);

        QMetaObject::connectSlotsByName(ButtonGroup);
    } // setupUi

    void retranslateUi(QWidget *ButtonGroup)
    {
        ButtonGroup->setWindowTitle(QApplication::translate("ButtonGroup", "Form", nullptr));
        login_usr->setText(QApplication::translate("ButtonGroup", "kevin", nullptr));
        myfile->setText(QApplication::translate("ButtonGroup", "\346\210\221\347\232\204\346\226\207\344\273\266", nullptr));
        sharelist->setText(QApplication::translate("ButtonGroup", "\345\205\261\344\272\253\345\210\227\350\241\250", nullptr));
        download->setText(QApplication::translate("ButtonGroup", "\344\270\213\350\275\275\346\246\234", nullptr));
        transform->setText(QApplication::translate("ButtonGroup", "\344\274\240\350\276\223\345\210\227\350\241\250", nullptr));
        switchuser->setText(QApplication::translate("ButtonGroup", "\345\210\207\346\215\242\347\224\250\346\210\267", nullptr));
        min->setText(QApplication::translate("ButtonGroup", "...", nullptr));
        max->setText(QApplication::translate("ButtonGroup", "...", nullptr));
        close->setText(QApplication::translate("ButtonGroup", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ButtonGroup: public Ui_ButtonGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONGROUP_H
