#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    grilfrend = new GrilFrend;
    me = new Me;


    connect(grilfrend, &GrilFrend::hungry, me, &Me::eat);
//    connect(ui->hungry, &QPushButton::clicked, this, &MainWindow::hugrySlot);
    connect(ui->hungry, &QPushButton::clicked, grilfrend, &GrilFrend::hungry);
    connect(ui->CloseBtn, &QPushButton::clicked, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::hugrySlot()
{
    emit grilfrend->hungry();
}
