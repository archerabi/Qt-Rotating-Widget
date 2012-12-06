#include "pageone.h"
#include "ui_pageone.h"

PageOne::PageOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOne)
{
    ui->setupUi(this);
}

PageOne::~PageOne()
{
    delete ui;
}
