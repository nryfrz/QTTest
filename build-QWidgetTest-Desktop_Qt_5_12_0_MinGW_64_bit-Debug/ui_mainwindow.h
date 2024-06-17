/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *moveBtn;
    QPushButton *getPsitionBtn;
    QPushButton *changetPositionBtn;
    QPushButton *changeTitleBtn;
    QPushButton *modaBtn;
    QPushButton *msgBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(825, 581);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        moveBtn = new QPushButton(centralWidget);
        moveBtn->setObjectName(QString::fromUtf8("moveBtn"));
        moveBtn->setGeometry(QRect(70, 60, 75, 23));
        getPsitionBtn = new QPushButton(centralWidget);
        getPsitionBtn->setObjectName(QString::fromUtf8("getPsitionBtn"));
        getPsitionBtn->setGeometry(QRect(70, 110, 111, 23));
        changetPositionBtn = new QPushButton(centralWidget);
        changetPositionBtn->setObjectName(QString::fromUtf8("changetPositionBtn"));
        changetPositionBtn->setGeometry(QRect(10, 160, 251, 23));
        changeTitleBtn = new QPushButton(centralWidget);
        changeTitleBtn->setObjectName(QString::fromUtf8("changeTitleBtn"));
        changeTitleBtn->setGeometry(QRect(440, 70, 331, 23));
        modaBtn = new QPushButton(centralWidget);
        modaBtn->setObjectName(QString::fromUtf8("modaBtn"));
        modaBtn->setGeometry(QRect(140, 250, 191, 23));
        msgBox = new QPushButton(centralWidget);
        msgBox->setObjectName(QString::fromUtf8("msgBox"));
        msgBox->setGeometry(QRect(200, 330, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 825, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        moveBtn->setText(QApplication::translate("MainWindow", "move", nullptr));
        getPsitionBtn->setText(QApplication::translate("MainWindow", "getPosition", nullptr));
        changetPositionBtn->setText(QApplication::translate("MainWindow", "changePositionAndSize", nullptr));
        changeTitleBtn->setText(QApplication::translate("MainWindow", "changeTitleAndIcon", nullptr));
        modaBtn->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\250\241\346\200\201\345\257\271\350\257\235\346\241\206", nullptr));
        msgBox->setText(QApplication::translate("MainWindow", "QMessageBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
