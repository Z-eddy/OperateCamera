#include "OpenCamera.h"
#include<iostream>
#include<QDebug>
#include<QImage>
using std::cout;
using std::endl;
using std::ends;
using namespace cv;

QImage mat2qim(Mat & mat)
{
	cvtColor(mat, mat, COLOR_BGR2RGB);
	QImage qim((const unsigned char*)mat.data, mat.cols, mat.rows, mat.step,
		QImage::Format_RGB888);
	return qim;
}

OpenCamera::OpenCamera(QWidget *parent)
	: QMainWindow(parent),\
	timer_(new QTimer{this})
{
	ui.setupUi(this);
	init();
}

void OpenCamera::init()
{
	video_.open(0);
	connect(timer_, &QTimer::timeout, this, &OpenCamera::readFarme);
	imageSize_ = QSize(video_.get(CAP_PROP_FRAME_WIDTH), video_.get(CAP_PROP_FRAME_HEIGHT));
}

void OpenCamera::on_btnOpen_clicked()
{
	timer_->start(16);
}

void OpenCamera::readFarme()
{
	video_.read(frame_);
	if (frame_.empty()) {
		return;
	}
	ui.labStream->setPixmap(QPixmap::fromImage(mat2qim(frame_)).scaled(imageSize_)) ;
}

void OpenCamera::on_btnClose_clicked()
{
	timer_->stop();
}

void OpenCamera::on_btnPhoto_clicked()
{
	video_.read(frame_);
	if (frame_.empty()) {
		return;
	}
	ui.labPhoto->setPixmap(QPixmap::fromImage(mat2qim(frame_)).scaled(imageSize_)) ;
}

void OpenCamera::resizeEvent(QResizeEvent *event)
{
	//imageSize_ = ui.scrollArea->size();
	return QMainWindow::resizeEvent(event);
}
