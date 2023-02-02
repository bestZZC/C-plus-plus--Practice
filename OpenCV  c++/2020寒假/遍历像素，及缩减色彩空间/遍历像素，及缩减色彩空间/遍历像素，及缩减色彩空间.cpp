

#include <iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
void reduce1(Mat& inputImg, Mat& outputImg, int div);
int main()
{
    //创建原始图像并显示
    Mat srcImg = imread("篮球.jpeg");
    imshow("原始图像", srcImg);
    //按原始图规格创建效果图
    Mat dstImg;
    dstImg.create(srcImg.rows, srcImg.cols, srcImg.type());
    //记录起始时间
    double time0 = static_cast<double>(getTickCount());
    //调用空间缩减函数
    reduce1(srcImg, dstImg, 32);
    //计算运算时间并输出
    time0 = ((double)getTickCount() - time0)/getTickFrequency();
    cout << "run time:" << time0 << "秒" << endl;
    imshow("效果图", dstImg);
    waitKey(0);
}
void reduce1(Mat& inputImg,Mat& outputImg, int div)
{
    outputImg = inputImg.clone();
    int rowNumber = outputImg.rows;
    int colNmuber = outputImg.cols*outputImg.channels();//每行元素个数=列数*通道数
    for (int i = 0; i < outputImg.rows; i++)
    {
        uchar* data = outputImg.ptr<uchar>(i);           //第i行首地址
        for (int j = 0; j < outputImg.cols; j++)
        {
            data[j] = data[j] / div * div + div / 2;
        }
    }
    
}
void reduce2(Mat& inputImg, Mat& outputImg, int div)
{
    outputImg = inputImg.clone();
}

