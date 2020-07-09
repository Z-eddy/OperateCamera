#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BaslerOpenCV.h"

class BaslerOpenCV : public QMainWindow
{
	Q_OBJECT

public:
	BaslerOpenCV(QWidget *parent = Q_NULLPTR);

private:
	Ui::BaslerOpenCVClass ui;
};
