#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton* btn1 = new QPushButton(this);
    btn1->setText("hhh");
    btn1->move(10,100);
    btn1->setFixedSize(200, 200);
    QPushButton* btn2 = new QPushButton(btn1);
    btn2->move(20,20);

}

MainWindow::~MainWindow()
{
    delete ui;
}
