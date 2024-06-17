#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置窗口最大尺寸
//    setMaximumSize(600, 600);
    //设置窗口最小尺寸
//    setMinimumSize(300, 300);
    //设置窗口固定大小
//    setFixedSize(500, 500);
    //设置窗口标题
    setWindowTitle("hello");
    //设置窗口图标
    setWindowIcon(QIcon("E:\\qt\\day03\\CoinFilp\\res\\Coin0001.png"));
//    this->setGeometry(QRect(100, 200, 300, 200));
    qDebug() << this->geometry();

    connect(this, &MainWindow::windowTitleChanged, this, [=](const QString &title) {
        qDebug() << "New Title: " << title;
    });
    connect(this, &MainWindow::windowIconChanged, this, [=](const QIcon &icon) {
        qDebug() << "New Icon: " << icon;
    });

    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &MainWindow::customContextMenuRequested, this, [=](const QPoint &pos) {
        QMenu menu;
        menu.addAction("aaa");
        menu.addAction("bbb");
        menu.addAction("ccc");
        menu.addAction("ddd");
        menu.exec(QCursor::pos());
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_moveBtn_clicked()
{
    QRect rect = this->frameGeometry();
    move(rect.x() + 10, rect.y() + 10);
}

void MainWindow::on_getPsitionBtn_clicked()
{
    QRect rect = this->frameGeometry();
    qDebug() << "左上角：" << rect.topLeft()
             << "右上角：" << rect.topRight()
             << "宽度：" << rect.width()
             << "高度：" << rect.height()
             << "大小：" << rect.size();
}

void MainWindow::on_changetPositionBtn_clicked()
{
    int x = 100 + rand() % 500;
    int y = 100 + rand() % 500;
    int width = this->width() + 100;
    int height = this->height() + 100;
    setGeometry(x, y, width, height);
}

void MainWindow::on_changeTitleBtn_clicked()
{
    setWindowTitle("你好");
    setWindowIcon(QIcon("E:\\qt\\day03\\CoinFilp\\res\\Coin0008.png"));
}

void MainWindow::on_modaBtn_clicked()
{
    MyDialog dialog;

    connect(&dialog, &MyDialog::finished, this, [=](int res) {
        qDebug() << "result: " << res;
    });
    connect(&dialog, &MyDialog::accepted, this, [=]() {
        qDebug() << "accept";
    });
    connect(&dialog, &MyDialog::rejected, this, [=]() {
        qDebug() << "reject";
    });

    int ret = dialog.exec();
    if(ret == QDialog::Accepted) {
        qDebug() << "accept button click";
    }
    else if(ret == QDialog::Rejected) {
        qDebug() << "reject button click";
    }
    else {
        qDebug() << "ret: " << ret;
    }
}

void MainWindow::on_msgBox_clicked()
{
    QMessageBox::about(this, "about", "这是一个简单的对话框");
    QMessageBox::critical(this, "critical", "错误对话框");
    int ret = QMessageBox::question(this, "question", "要保存文件内容吗", QMessageBox::Save | QMessageBox::Cancel, QMessageBox::Cancel);
    if(ret == QMessageBox::Save) {
        QMessageBox::information(this, "information", "成功");
    } else {
        QMessageBox::warning(this, "warning", "失败");
    }
}
