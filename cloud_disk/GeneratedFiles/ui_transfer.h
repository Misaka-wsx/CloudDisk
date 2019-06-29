/********************************************************************************
** Form generated from reading UI file 'transfer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_H
#define UI_TRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Transfer
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *upload;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *upload_scroll;
    QVBoxLayout *verticalLayout_5;
    QWidget *download;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *download_scroll;
    QVBoxLayout *verticalLayout_6;
    QWidget *record;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_2;
    QTextEdit *record_msg;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *clearBtn;

    void setupUi(QWidget *Transfer)
    {
        if (Transfer->objectName().isEmpty())
            Transfer->setObjectName(QString::fromUtf8("Transfer"));
        Transfer->resize(789, 580);
        gridLayout = new QGridLayout(Transfer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(Transfer);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(16);
        tabWidget->setFont(font);
        upload = new QWidget();
        upload->setObjectName(QString::fromUtf8("upload"));
        verticalLayout_2 = new QVBoxLayout(upload);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(upload);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        upload_scroll = new QWidget();
        upload_scroll->setObjectName(QString::fromUtf8("upload_scroll"));
        upload_scroll->setGeometry(QRect(0, 0, 771, 538));
        verticalLayout_5 = new QVBoxLayout(upload_scroll);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(upload_scroll);

        verticalLayout_2->addWidget(scrollArea);

        tabWidget->addTab(upload, QString());
        download = new QWidget();
        download->setObjectName(QString::fromUtf8("download"));
        verticalLayout_3 = new QVBoxLayout(download);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(download);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        download_scroll = new QWidget();
        download_scroll->setObjectName(QString::fromUtf8("download_scroll"));
        download_scroll->setGeometry(QRect(0, 0, 771, 538));
        verticalLayout_6 = new QVBoxLayout(download_scroll);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_2->setWidget(download_scroll);

        verticalLayout_3->addWidget(scrollArea_2);

        tabWidget->addTab(download, QString());
        record = new QWidget();
        record->setObjectName(QString::fromUtf8("record"));
        verticalLayout_4 = new QVBoxLayout(record);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(record);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 771, 538));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        record_msg = new QTextEdit(scrollAreaWidgetContents_3);
        record_msg->setObjectName(QString::fromUtf8("record_msg"));
        record_msg->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(record_msg, 2, 0, 1, 2);

        widget = new QWidget(scrollAreaWidgetContents_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clearBtn = new QToolButton(widget);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));
        clearBtn->setMinimumSize(QSize(0, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        clearBtn->setFont(font1);
        clearBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 16pt \"\345\271\274\345\234\206\";"));
        clearBtn->setAutoRaise(true);

        horizontalLayout->addWidget(clearBtn);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_4->addWidget(scrollArea_3);

        tabWidget->addTab(record, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Transfer);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Transfer);
    } // setupUi

    void retranslateUi(QWidget *Transfer)
    {
        Transfer->setWindowTitle(QApplication::translate("Transfer", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(upload), QApplication::translate("Transfer", "\344\270\212\344\274\240\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(download), QApplication::translate("Transfer", "\344\270\213\350\275\275\345\210\227\350\241\250", nullptr));
        clearBtn->setText(QApplication::translate("Transfer", "\346\270\205\351\231\244\350\256\260\345\275\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(record), QApplication::translate("Transfer", "\344\274\240\350\276\223\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transfer: public Ui_Transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_H
