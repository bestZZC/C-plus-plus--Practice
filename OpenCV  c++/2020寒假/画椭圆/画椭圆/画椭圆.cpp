#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
#define WINDOW_NAME1"[]"
#define WINDOW_WIDTH 600      //定义窗口大小


void DrawEllipse(Mat img, double angle)
{
	int thickness = 2;
	int lineType = 8;
	ellipse(img,
		Point(WINDOW_WIDTH / 2, WINDOW_WIDTH / 2),
		Size(WINDOW_WIDTH / 4, WINDOW_WIDTH / 16),
		angle,              //扩展的弧度0到360
		0,
		360,
		Scalar(255, 129, 0),     //RGB颜色线条颜色蓝色
		thickness,               //线宽2
		lineType);               //线型8
}
int main(void)
{
	Mat atomImage = Mat::zeros(WINDOW_WIDTH, WINDOW_WIDTH, CV_8UC3);
	Mat rookImage = Mat::zeros(WINDOW_WIDTH, WINDOW_WIDTH, CV_8UC3);
	DrawEllipse(atomImage, 90);
	DrawEllipse(atomImage, 0);
	DrawEllipse(atomImage, -45);
	DrawEllipse(atomImage, 45);
}
