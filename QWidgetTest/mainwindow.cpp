#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QInputDialog>
#include <QProgressDialog>
#include <QTimer>

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
    setWindowIcon(QIcon(":/res/Coin0001.png"));
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


    ui->statusBar->showMessage("statuBar", 3000);
    QPushButton* Btn = new QPushButton("按钮");
    ui->statusBar->addWidget(Btn);
    QLabel* label = new QLabel("hello");


    QTimer::singleShot(3000, this, [=] {
        Btn->show();
        label->show();
    });


    ui->statusBar->addWidget(label);


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

void MainWindow::on_qFileDialogBtn_clicked()
{
//    QString filename = QFileDialog::getExistingDirectory(this, "打开目录", "E:\\qt\\day03\\CoinFilp\\res");
//    QMessageBox::information(this, "information", "您打开的目录为：" + filename);

//    QString arg("Text file (*.txt)");
//    QString filename = QFileDialog::getOpenFileName(
//                this, "open file", "E:\\qt\\day03\\CoinFilp\\res",
//                "Images (*.png *.jpg);;Text file(*.txt)", &arg);
//    QMessageBox::information(this, "打开文件", "打开的文件为：" + filename);

//    QStringList filenames = QFileDialog::getOpenFileNames(
//                this, "open file", "E:\\qt\\day03\\CoinFilp\\res",
//                "Images (*.jpg *.png);;Text files(*.txt)");
//    QString names;
//    for(int i = 0; i < filenames.size(); i ++ )
//    {
//        names += filenames[i] + ' ';

//    }
//    QMessageBox::information(this, "open files", "选择的文件是：" + names);
    QString filename = QFileDialog::getSaveFileName(
                this, "保存文件", "E:\\qt\\day03\\CoinFilp\\res");
    QMessageBox::information(this, "保存文件", "保存的文件为：" + filename);

}

void MainWindow::on_setFontBtn_clicked()
{
    bool ok;
    QFont ft = QFontDialog::getFont(&ok, QFont("微软雅黑", 12, -1, false), this, "字体选择");
    qDebug() << "ok is " << ok;
    ui->fontLabel->setFont(ft);
}

void MainWindow::on_selectColorBtn_clicked()
{
    QColor cl = QColorDialog::getColor();

}

void MainWindow::on_inputBtn_clicked()
{
    bool ok;
//    int ret = QInputDialog::getInt(this, "age", "your age", 10, 0, 100, 1, &ok);
//    QMessageBox::information(this, "age", "your age: " + QString::number(ret));

//    double ret = QInputDialog::getDouble(this, "身高", "你的身高", 160, 100, 200, 1, &ok);
//    QMessageBox::information(this, "身高", "你的身高是: " + QString::number(ret));

//    QStringList items;
//    items << "1" << "2" << "3" << "4";
//    QString ret = QInputDialog::getItem(this, "number", "your number", items, 1, false, &ok);
//    QMessageBox::information(this, "number", "your number: " + ret);


    QString text = QInputDialog::getText(
                this, "pwd", "input your pwd",
                QLineEdit::Password, NULL, &ok);
    QMessageBox::information(this, "pwd", "your pwd is: " + text);
}

void MainWindow::on_qProcessBtn_clicked()
{

    //创建进度条窗口
    QProgressDialog* progress = new QProgressDialog(
                "正在拷贝数据", "取消拷贝", 0, 100, this);

    //初始化并显示窗口
    progress->setWindowTitle("请稍等");
    progress->setAutoClose(false);
    progress->setWindowModality(Qt::WindowModal);
    progress->show();

    //更新进度条
    static int value = 0;
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=]() {
        progress->setValue(value);
        value ++;
        if(value > progress->maximum()) {
            timer->stop();
            value = 0;
            delete progress;
            delete timer;
        }
    });
    //点击取消关闭窗口
    connect(progress, &QProgressDialog::canceled, this, [=]() {
        timer->stop();
        value = 0;
        delete progress;
        delete timer;
    });

    timer->start(50);

}
