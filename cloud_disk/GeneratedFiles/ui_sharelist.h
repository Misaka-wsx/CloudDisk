/********************************************************************************
** Form generated from reading UI file 'sharelist.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHARELIST_H
#define UI_SHARELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShareList
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *ShareList)
    {
        if (ShareList->objectName().isEmpty())
            ShareList->setObjectName(QString::fromUtf8("ShareList"));
        ShareList->resize(400, 300);
        verticalLayout = new QVBoxLayout(ShareList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(ShareList);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(ShareList);

        QMetaObject::connectSlotsByName(ShareList);
    } // setupUi

    void retranslateUi(QWidget *ShareList)
    {
        ShareList->setWindowTitle(QApplication::translate("ShareList", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShareList: public Ui_ShareList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHARELIST_H
