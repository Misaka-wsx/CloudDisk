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
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cloud_diskClass
{
public:

    void setupUi(QWidget *cloud_diskClass)
    {
        if (cloud_diskClass->objectName().isEmpty())
            cloud_diskClass->setObjectName(QString::fromUtf8("cloud_diskClass"));
        cloud_diskClass->resize(600, 400);

        retranslateUi(cloud_diskClass);

        QMetaObject::connectSlotsByName(cloud_diskClass);
    } // setupUi

    void retranslateUi(QWidget *cloud_diskClass)
    {
        cloud_diskClass->setWindowTitle(QApplication::translate("cloud_diskClass", "cloud_disk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cloud_diskClass: public Ui_cloud_diskClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUD_DISK_H
