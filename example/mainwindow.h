#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class RotatingStackedWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void stepForward();
    void stepBackward();
    
private:
    Ui::MainWindow *ui;
    RotatingStackedWidget * stack;
};

#endif // MAINWINDOW_H
