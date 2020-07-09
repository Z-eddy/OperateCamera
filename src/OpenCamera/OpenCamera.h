#pragma once

#include <QtWidgets/QMainWindow>
#include<QTimer>
#include<QSize>
#include "ui_OpenCamera.h"
#include "opencv2/highgui.hpp"
#include "opencv2/opencv.hpp"
using cv::Mat;
using cv::VideoCapture;

class OpenCamera : public QMainWindow
{
	Q_OBJECT

public:
	OpenCamera(QWidget *parent = Q_NULLPTR);

protected:
	void resizeEvent(QResizeEvent *event) override;

private:
	void init();
	Ui::OpenCameraClass ui;

	QTimer    *timer_;
	VideoCapture video_;//获得摄像头数据
    Mat frame_;//存放每一帧图像
	QSize imageSize_;

private slots:
	void on_btnOpen_clicked();      // 打开摄像头
	void readFarme();       // 读取当前帧信息
	void on_btnClose_clicked();     // 关闭摄像头。
	void on_btnPhoto_clicked();  // 拍照
};
