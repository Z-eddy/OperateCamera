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
	VideoCapture video_;//�������ͷ����
    Mat frame_;//���ÿһ֡ͼ��
	QSize imageSize_;

private slots:
	void on_btnOpen_clicked();      // ������ͷ
	void readFarme();       // ��ȡ��ǰ֡��Ϣ
	void on_btnClose_clicked();     // �ر�����ͷ��
	void on_btnPhoto_clicked();  // ����
};
