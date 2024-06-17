#include "testweight.h"
#include "ui_testweight.h"

TestWeight::TestWeight(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWeight)
{
    ui->setupUi(this);
}

TestWeight::~TestWeight()
{
    delete ui;
}
