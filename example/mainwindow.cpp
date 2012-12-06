#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QHBoxLayout>

#include "RotatingStackedWidget.h"
#include "pageone.h"
#include "pagetwo.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stack = new RotatingStackedWidget(this);
    ui->mainLayout->addWidget(stack);

    PageOne * page1 = new PageOne;
    PageTwo * page2 = new PageTwo;

    stack->addWidget(page1);
    stack->addWidget(page2);

    connect(ui->buttonFw,SIGNAL(clicked()),SLOT(stepForward()));
    connect(ui->buttonBw,SIGNAL(clicked()),SLOT(stepBackward()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::stepForward()
{
    stack->rotate(1);
}

void MainWindow::stepBackward()
{
    stack->rotate(0);
}
