#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>
#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer* t = new QTimer(this);
    t->setTimerType(Qt::PreciseTimer);
    connect(ui->loopBtn, &QPushButton::clicked, this, [=]() {

        if(t->isActive()) {
            //关闭定时器
            t->stop();
            ui->loopBtn->setText("开始");
        } else {
            //启动定时器
            t->start(1000);
            ui->loopBtn->setText("关闭");
        }
    });
    connect(t, &QTimer::timeout, this, [=]() {
        QTime tm = QTime::currentTime();
        QString tmstr = tm.toString("hh:mm:ss.zzz");
        ui->loopTimer->setText(tmstr);
    });

    //发射一次信号
    connect(ui->onceBtn, &QPushButton::clicked, this, [=]() {
        QTimer::singleShot(2000, this, [=]() {
            QTime tm = QTime::currentTime();
            QString tmstr = tm.toString("hh:mm:ss.zzz");
            ui->onceTimer->setText(tmstr);
        });
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
