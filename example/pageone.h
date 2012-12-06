#ifndef PAGEONE_H
#define PAGEONE_H

#include <QWidget>

namespace Ui {
class PageOne;
}

class PageOne : public QWidget
{
    Q_OBJECT
    
public:
    explicit PageOne(QWidget *parent = 0);
    ~PageOne();
    
private:
    Ui::PageOne *ui;
};

#endif // PAGEONE_H
