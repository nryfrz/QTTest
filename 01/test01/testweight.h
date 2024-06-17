#ifndef TESTWEIGHT_H
#define TESTWEIGHT_H

#include <QWidget>

namespace Ui {
class TestWeight;
}

class TestWeight : public QWidget
{
    Q_OBJECT

public:
    explicit TestWeight(QWidget *parent = nullptr);
    ~TestWeight();

private:
    Ui::TestWeight *ui;
};

#endif // TESTWEIGHT_H
