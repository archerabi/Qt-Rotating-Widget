/********************************************************************************
** Form generated from reading UI file 'pagetwo.ui'
**
** Created: Thu Dec 6 12:18:55 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGETWO_H
#define UI_PAGETWO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_PageTwo
{
public:
    QVBoxLayout *verticalLayout;
    QWebView *webView;

    void setupUi(QWidget *PageTwo)
    {
        if (PageTwo->objectName().isEmpty())
            PageTwo->setObjectName(QString::fromUtf8("PageTwo"));
        PageTwo->resize(400, 300);
        verticalLayout = new QVBoxLayout(PageTwo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        webView = new QWebView(PageTwo);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("http://www.google.md/")));
        webView->setRenderHints(QPainter::Antialiasing|QPainter::HighQualityAntialiasing|QPainter::NonCosmeticDefaultPen|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);

        verticalLayout->addWidget(webView);


        retranslateUi(PageTwo);

        QMetaObject::connectSlotsByName(PageTwo);
    } // setupUi

    void retranslateUi(QWidget *PageTwo)
    {
        PageTwo->setWindowTitle(QApplication::translate("PageTwo", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PageTwo: public Ui_PageTwo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGETWO_H
