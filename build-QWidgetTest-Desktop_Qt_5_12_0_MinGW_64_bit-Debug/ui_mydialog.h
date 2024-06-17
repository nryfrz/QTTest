/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QPushButton *acceptBtn;
    QPushButton *rejectBtn;
    QPushButton *doneBtn;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QString::fromUtf8("MyDialog"));
        MyDialog->resize(400, 300);
        acceptBtn = new QPushButton(MyDialog);
        acceptBtn->setObjectName(QString::fromUtf8("acceptBtn"));
        acceptBtn->setGeometry(QRect(80, 50, 75, 23));
        rejectBtn = new QPushButton(MyDialog);
        rejectBtn->setObjectName(QString::fromUtf8("rejectBtn"));
        rejectBtn->setGeometry(QRect(80, 110, 75, 23));
        doneBtn = new QPushButton(MyDialog);
        doneBtn->setObjectName(QString::fromUtf8("doneBtn"));
        doneBtn->setGeometry(QRect(80, 170, 75, 23));

        retranslateUi(MyDialog);

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "Dialog", nullptr));
        acceptBtn->setText(QApplication::translate("MyDialog", "accept", nullptr));
        rejectBtn->setText(QApplication::translate("MyDialog", "reject", nullptr));
        doneBtn->setText(QApplication::translate("MyDialog", "done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
