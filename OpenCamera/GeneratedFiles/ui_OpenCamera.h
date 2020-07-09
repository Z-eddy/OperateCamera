/********************************************************************************
** Form generated from reading UI file 'OpenCamera.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCAMERA_H
#define UI_OPENCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenCameraClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btnOpen;
    QPushButton *btnClose;
    QPushButton *btnPhoto;
    QSpacerItem *verticalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *labStream;
    QLabel *labPhoto;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenCameraClass)
    {
        if (OpenCameraClass->objectName().isEmpty())
            OpenCameraClass->setObjectName(QString::fromUtf8("OpenCameraClass"));
        OpenCameraClass->resize(800, 1080);
        centralWidget = new QWidget(OpenCameraClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnOpen = new QPushButton(centralWidget);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));

        verticalLayout->addWidget(btnOpen);

        btnClose = new QPushButton(centralWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        verticalLayout->addWidget(btnClose);

        btnPhoto = new QPushButton(centralWidget);
        btnPhoto->setObjectName(QString::fromUtf8("btnPhoto"));

        verticalLayout->addWidget(btnPhoto);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 677, 994));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labStream = new QLabel(scrollAreaWidgetContents);
        labStream->setObjectName(QString::fromUtf8("labStream"));

        verticalLayout_2->addWidget(labStream);

        labPhoto = new QLabel(scrollAreaWidgetContents);
        labPhoto->setObjectName(QString::fromUtf8("labPhoto"));

        verticalLayout_2->addWidget(labPhoto);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        OpenCameraClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenCameraClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        OpenCameraClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenCameraClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        OpenCameraClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OpenCameraClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        OpenCameraClass->setStatusBar(statusBar);

        retranslateUi(OpenCameraClass);

        QMetaObject::connectSlotsByName(OpenCameraClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpenCameraClass)
    {
        OpenCameraClass->setWindowTitle(QApplication::translate("OpenCameraClass", "OpenCamera", nullptr));
        btnOpen->setText(QApplication::translate("OpenCameraClass", "Open", nullptr));
        btnClose->setText(QApplication::translate("OpenCameraClass", "Close", nullptr));
        btnPhoto->setText(QApplication::translate("OpenCameraClass", "Photo", nullptr));
        labStream->setText(QString());
        labPhoto->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OpenCameraClass: public Ui_OpenCameraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCAMERA_H
