/********************************************************************************
** Form generated from reading UI file 'SinglePylonOpenCVTest.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEPYLONOPENCVTEST_H
#define UI_SINGLEPYLONOPENCVTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SinglePylonOpenCVTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SinglePylonOpenCVTestClass)
    {
        if (SinglePylonOpenCVTestClass->objectName().isEmpty())
            SinglePylonOpenCVTestClass->setObjectName(QString::fromUtf8("SinglePylonOpenCVTestClass"));
        SinglePylonOpenCVTestClass->resize(600, 400);
        menuBar = new QMenuBar(SinglePylonOpenCVTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        SinglePylonOpenCVTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SinglePylonOpenCVTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SinglePylonOpenCVTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SinglePylonOpenCVTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SinglePylonOpenCVTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SinglePylonOpenCVTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SinglePylonOpenCVTestClass->setStatusBar(statusBar);

        retranslateUi(SinglePylonOpenCVTestClass);

        QMetaObject::connectSlotsByName(SinglePylonOpenCVTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *SinglePylonOpenCVTestClass)
    {
        SinglePylonOpenCVTestClass->setWindowTitle(QApplication::translate("SinglePylonOpenCVTestClass", "SinglePylonOpenCVTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SinglePylonOpenCVTestClass: public Ui_SinglePylonOpenCVTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEPYLONOPENCVTEST_H
