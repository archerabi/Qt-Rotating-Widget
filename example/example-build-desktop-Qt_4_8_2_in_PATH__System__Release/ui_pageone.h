/********************************************************************************
** Form generated from reading UI file 'pageone.ui'
**
** Created: Thu Dec 6 12:18:55 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEONE_H
#define UI_PAGEONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageOne
{
public:
    QGridLayout *gridLayout;
    QDial *dial;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;

    void setupUi(QWidget *PageOne)
    {
        if (PageOne->objectName().isEmpty())
            PageOne->setObjectName(QString::fromUtf8("PageOne"));
        PageOne->resize(400, 300);
        gridLayout = new QGridLayout(PageOne);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dial = new QDial(PageOne);
        dial->setObjectName(QString::fromUtf8("dial"));

        gridLayout->addWidget(dial, 0, 0, 1, 1);

        verticalSlider = new QSlider(PageOne);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider, 0, 1, 1, 1);

        horizontalSlider = new QSlider(PageOne);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 2);


        retranslateUi(PageOne);
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), dial, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(sliderMoved(int)), dial, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), verticalSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(PageOne);
    } // setupUi

    void retranslateUi(QWidget *PageOne)
    {
        PageOne->setWindowTitle(QApplication::translate("PageOne", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PageOne: public Ui_PageOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEONE_H
