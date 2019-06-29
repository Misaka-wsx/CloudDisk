/********************************************************************************
** Form generated from reading UI file 'rankinglist.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKINGLIST_H
#define UI_RANKINGLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankingList
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *RankingList)
    {
        if (RankingList->objectName().isEmpty())
            RankingList->setObjectName(QString::fromUtf8("RankingList"));
        RankingList->resize(511, 420);
        verticalLayout = new QVBoxLayout(RankingList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(RankingList);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\271\274\345\234\206\";"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(RankingList);

        QMetaObject::connectSlotsByName(RankingList);
    } // setupUi

    void retranslateUi(QWidget *RankingList)
    {
        RankingList->setWindowTitle(QApplication::translate("RankingList", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RankingList: public Ui_RankingList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKINGLIST_H
