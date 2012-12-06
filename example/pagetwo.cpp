#include "pagetwo.h"
#include "ui_pagetwo.h"

PageTwo::PageTwo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageTwo)
{
    ui->setupUi(this);
}

PageTwo::~PageTwo()
{
    delete ui;
}
