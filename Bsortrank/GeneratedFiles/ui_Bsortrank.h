/********************************************************************************
** Form generated from reading UI file 'Bsortrank.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BSORTRANK_H
#define UI_BSORTRANK_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BsortrankClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QWebEngineView *webEngineView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BsortrankClass)
    {
        if (BsortrankClass->objectName().isEmpty())
            BsortrankClass->setObjectName(QStringLiteral("BsortrankClass"));
        BsortrankClass->resize(600, 400);
        centralWidget = new QWidget(BsortrankClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, 10, -1);

        horizontalLayout->addLayout(verticalLayout);

        webEngineView = new QWebEngineView(centralWidget);
        webEngineView->setObjectName(QStringLiteral("webEngineView"));
        webEngineView->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout->addWidget(webEngineView);

        BsortrankClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BsortrankClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        BsortrankClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BsortrankClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BsortrankClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BsortrankClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BsortrankClass->setStatusBar(statusBar);

        retranslateUi(BsortrankClass);

        QMetaObject::connectSlotsByName(BsortrankClass);
    } // setupUi

    void retranslateUi(QMainWindow *BsortrankClass)
    {
        BsortrankClass->setWindowTitle(QApplication::translate("BsortrankClass", "Bsortrank", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BsortrankClass: public Ui_BsortrankClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BSORTRANK_H
