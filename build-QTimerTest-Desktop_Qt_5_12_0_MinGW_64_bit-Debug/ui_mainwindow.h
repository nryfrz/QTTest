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
#include <QtWidgets/QLabel>
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
    QPushButton *loopBtn;
    QLabel *loopTimer;
    QLabel *onceTimer;
    QPushButton *onceBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        loopBtn = new QPushButton(centralWidget);
        loopBtn->setObjectName(QString::fromUtf8("loopBtn"));
        loopBtn->setGeometry(QRect(30, 60, 75, 23));
        loopTimer = new QLabel(centralWidget);
        loopTimer->setObjectName(QString::fromUtf8("loopTimer"));
        loopTimer->setGeometry(QRect(160, 60, 201, 16));
        onceTimer = new QLabel(centralWidget);
        onceTimer->setObjectName(QString::fromUtf8("onceTimer"));
        onceTimer->setGeometry(QRect(160, 140, 201, 16));
        onceBtn = new QPushButton(centralWidget);
        onceBtn->setObjectName(QString::fromUtf8("onceBtn"));
        onceBtn->setGeometry(QRect(30, 140, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
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
        loopBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        loopTimer->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        onceTimer->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        onceBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
