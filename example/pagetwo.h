#ifndef PAGETWO_H
#define PAGETWO_H

#include <QWidget>

namespace Ui {
class PageTwo;
}

class PageTwo : public QWidget
{
    Q_OBJECT
    
public:
    explicit PageTwo(QWidget *parent = 0);
    ~PageTwo();
    
private:
    Ui::PageTwo *ui;
};

#endif // PAGETWO_H
