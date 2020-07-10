/********************************************************************************
** Form generated from reading UI file 'SinglePylonOpenCVTest2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEPYLONOPENCVTEST2_H
#define UI_SINGLEPYLONOPENCVTEST2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SinglePylonOpenCVTest2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SinglePylonOpenCVTest2Class)
    {
        if (SinglePylonOpenCVTest2Class->objectName().isEmpty())
            SinglePylonOpenCVTest2Class->setObjectName(QString::fromUtf8("SinglePylonOpenCVTest2Class"));
        SinglePylonOpenCVTest2Class->resize(600, 400);
        menuBar = new QMenuBar(SinglePylonOpenCVTest2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        SinglePylonOpenCVTest2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SinglePylonOpenCVTest2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SinglePylonOpenCVTest2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(SinglePylonOpenCVTest2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SinglePylonOpenCVTest2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SinglePylonOpenCVTest2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SinglePylonOpenCVTest2Class->setStatusBar(statusBar);

        retranslateUi(SinglePylonOpenCVTest2Class);

        QMetaObject::connectSlotsByName(SinglePylonOpenCVTest2Class);
    } // setupUi

    void retranslateUi(QMainWindow *SinglePylonOpenCVTest2Class)
    {
        SinglePylonOpenCVTest2Class->setWindowTitle(QApplication::translate("SinglePylonOpenCVTest2Class", "SinglePylonOpenCVTest2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SinglePylonOpenCVTest2Class: public Ui_SinglePylonOpenCVTest2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEPYLONOPENCVTEST2_H
