#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_moveBtn_clicked();

    void on_getPsitionBtn_clicked();

    void on_changetPositionBtn_clicked();

    void on_changeTitleBtn_clicked();

    void on_modaBtn_clicked();

    void on_msgBox_clicked();

    void on_qFileDialogBtn_clicked();

    void on_setFontBtn_clicked();

    void on_selectColorBtn_clicked();

    void on_inputBtn_clicked();

    void on_qProcessBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
