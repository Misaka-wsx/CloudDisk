/********************************************************************************
** Form generated from reading UI file 'cloud_disk.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOUD_DISK_H
#define UI_CLOUD_DISK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cloud_disk
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QToolButton *close_window;
    QToolButton *maxmize;
    QToolButton *minmize;
    QToolButton *my_files;
    QToolButton *share_list;
    QToolButton *hot_list;
    QToolButton *trans_list;
    QToolButton *switch_user;
    QToolButton *user;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QListWidget *listWidget;
    QWidget *page_2;

    void setupUi(QMainWindow *cloud_disk)
    {
        if (cloud_disk->objectName().isEmpty())
            cloud_disk->setObjectName(QString::fromUtf8("cloud_disk"));
        cloud_disk->resize(1019, 610);
        centralwidget = new QWidget(cloud_disk);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1021, 101));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(620, 10, 361, 61));
        close_window = new QToolButton(widget_2);
        close_window->setObjectName(QString::fromUtf8("close_window"));
        close_window->setGeometry(QRect(280, 10, 61, 41));
        close_window->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/title_close.png);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/Resources/image/images/title_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_window->setIcon(icon);
        maxmize = new QToolButton(widget_2);
        maxmize->setObjectName(QString::fromUtf8("maxmize"));
        maxmize->setGeometry(QRect(200, 10, 61, 41));
        maxmize->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/title_max.png);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/Resources/image/images/title_max.png"), QSize(), QIcon::Normal, QIcon::Off);
        maxmize->setIcon(icon1);
        minmize = new QToolButton(widget_2);
        minmize->setObjectName(QString::fromUtf8("minmize"));
        minmize->setGeometry(QRect(120, 10, 61, 41));
        minmize->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/Resources/image/images/title_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        minmize->setIcon(icon2);
        my_files = new QToolButton(widget);
        my_files->setObjectName(QString::fromUtf8("my_files"));
        my_files->setGeometry(QRect(120, 10, 81, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        my_files->setFont(font);
        my_files->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/Resources/image/images/tile_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        my_files->setIcon(icon3);
        my_files->setIconSize(QSize(50, 50));
        my_files->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        share_list = new QToolButton(widget);
        share_list->setObjectName(QString::fromUtf8("share_list"));
        share_list->setGeometry(QRect(210, 10, 81, 81));
        share_list->setFont(font);
        share_list->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/Resources/image/images/title_share.png"), QSize(), QIcon::Normal, QIcon::Off);
        share_list->setIcon(icon4);
        share_list->setIconSize(QSize(50, 50));
        share_list->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        hot_list = new QToolButton(widget);
        hot_list->setObjectName(QString::fromUtf8("hot_list"));
        hot_list->setGeometry(QRect(300, 10, 81, 81));
        hot_list->setFont(font);
        hot_list->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/Resources/image/images/tile_hot.png"), QSize(), QIcon::Normal, QIcon::Off);
        hot_list->setIcon(icon5);
        hot_list->setIconSize(QSize(50, 50));
        hot_list->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        trans_list = new QToolButton(widget);
        trans_list->setObjectName(QString::fromUtf8("trans_list"));
        trans_list->setGeometry(QRect(400, 10, 81, 81));
        trans_list->setFont(font);
        trans_list->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/Resources/image/images/title_data.png"), QSize(), QIcon::Normal, QIcon::Off);
        trans_list->setIcon(icon6);
        trans_list->setIconSize(QSize(50, 50));
        trans_list->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        switch_user = new QToolButton(widget);
        switch_user->setObjectName(QString::fromUtf8("switch_user"));
        switch_user->setGeometry(QRect(490, 10, 81, 81));
        switch_user->setFont(font);
        switch_user->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/Resources/image/images/title_change.png"), QSize(), QIcon::Normal, QIcon::Off);
        switch_user->setIcon(icon7);
        switch_user->setIconSize(QSize(50, 50));
        switch_user->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        user = new QToolButton(widget);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(10, 10, 91, 81));
        user->setFont(font);
        user->setStyleSheet(QString::fromUtf8(""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/Resources/image/images/title_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        user->setIcon(icon8);
        user->setIconSize(QSize(50, 50));
        user->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 120, 991, 481));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        listWidget = new QListWidget(page);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(-5, 1, 991, 481));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        cloud_disk->setCentralWidget(centralwidget);

        retranslateUi(cloud_disk);

        QMetaObject::connectSlotsByName(cloud_disk);
    } // setupUi

    void retranslateUi(QMainWindow *cloud_disk)
    {
        cloud_disk->setWindowTitle(QApplication::translate("cloud_disk", "MainWindow", nullptr));
        close_window->setText(QApplication::translate("cloud_disk", "...", nullptr));
        maxmize->setText(QApplication::translate("cloud_disk", "...", nullptr));
        minmize->setText(QApplication::translate("cloud_disk", "...", nullptr));
        my_files->setText(QApplication::translate("cloud_disk", "\346\210\221\347\232\204\346\226\207\344\273\266", nullptr));
        share_list->setText(QApplication::translate("cloud_disk", "\345\205\261\344\272\253\345\210\227\350\241\250", nullptr));
        hot_list->setText(QApplication::translate("cloud_disk", "\344\270\213\350\275\275\346\246\234", nullptr));
        trans_list->setText(QApplication::translate("cloud_disk", "\344\274\240\350\276\223\345\210\227\350\241\250", nullptr));
        switch_user->setText(QApplication::translate("cloud_disk", "\345\210\207\346\215\242\347\224\250\346\210\267", nullptr));
        user->setText(QApplication::translate("cloud_disk", "Mike", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cloud_disk: public Ui_cloud_disk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUD_DISK_H
