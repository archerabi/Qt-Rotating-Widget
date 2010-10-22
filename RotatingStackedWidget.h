#ifndef WIDGET1_H
#define WIDGET1_H

#include <QVariant>
#include <QWidget>
#include <QLabel>
#include <QStackedWidget>
class RotatingStackedWidget : public QStackedWidget
{
    Q_OBJECT

    Q_PROPERTY( float rotateVal READ rotateVal WRITE setRotateVal);
    public:
        explicit RotatingStackedWidget(QWidget *parent = 0);
        void paintEvent(QPaintEvent *);
        void rotate(int);

        float rotateVal();
        void setRotateVal(float);

    signals:

    private slots:
        void valChanged(QVariant);
        void animDone();
    private:
        float iRotateVal;

        bool isAnimating;
        int nextIndex;
};

#endif // WIDGET1_H
