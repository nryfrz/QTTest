#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testweight.h"
#include "testdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    TestWeight* w = new TestWeight(this);
//    w->show();
    //对话框窗口类

    TestDialog* w = new TestDialog(this);
    //非模态 焦点可以切换
//    w->show();
    //模态exec()
    w->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
