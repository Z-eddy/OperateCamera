#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SinglePylonOpenCVTest.h"

class SinglePylonOpenCVTest : public QMainWindow
{
	Q_OBJECT

public:
	SinglePylonOpenCVTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::SinglePylonOpenCVTestClass ui;
};
