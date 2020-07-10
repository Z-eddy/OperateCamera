#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SinglePylonOpenCVTest2.h"

class SinglePylonOpenCVTest2 : public QMainWindow
{
	Q_OBJECT

public:
	SinglePylonOpenCVTest2(QWidget *parent = Q_NULLPTR);

private:
	Ui::SinglePylonOpenCVTest2Class ui;
};
