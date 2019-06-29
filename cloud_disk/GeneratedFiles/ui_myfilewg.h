/********************************************************************************
** Form generated from reading UI file 'myfilewg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFILEWG_H
#define UI_MYFILEWG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFileWg
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *MyFileWg)
    {
        if (MyFileWg->objectName().isEmpty())
            MyFileWg->setObjectName(QString::fromUtf8("MyFileWg"));
        MyFileWg->resize(744, 592);
        verticalLayout = new QVBoxLayout(MyFileWg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(MyFileWg);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(MyFileWg);

        QMetaObject::connectSlotsByName(MyFileWg);
    } // setupUi

    void retranslateUi(QWidget *MyFileWg)
    {
        MyFileWg->setWindowTitle(QApplication::translate("MyFileWg", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyFileWg: public Ui_MyFileWg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFILEWG_H
