// 掩膜操作及Filter2D.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
void Sharpen(const Mat& inputImg, Mat& result);

int main()
{
    Mat srcImg = imread("篮球.jpeg");
    Mat  dstImg;
    
    namedWindow("Sharpen output", WINDOW_NORMAL);
    imshow("Input", srcImg);

    Sharpen(srcImg, dstImg);
    imshow("Result", dstImg);

}


void Sharpen(const Mat& inputImg, Mat& Result)
{
    const int Channels = inputImg.channels();
    Result.create(inputImg.size(), inputImg.type());
    for (int j = 1; j < inputImg.rows - 1; ++j)         //处理列
    {
        const uchar* previous = inputImg.ptr<uchar>(j - 1);
        const uchar* current = inputImg.ptr<uchar>(j);
        const uchar* next = inputImg.ptr<uchar>(j+ 1);
        uchar* output = Result.ptr<uchar>(j);
        for (int i = Channels; i < Channels * (inputImg.cols - 1); ++i)
        {
            /*Mask:
            0 -1 0
            -1 5 -1
            0 -1 0      
              */
            *output++ = saturate_cast<uchar>(5 * current[i] - current[i - Channels] - current[i + Channels] - previous[i] - next[i]);//firstly ++ 
        }
    }
    //处理边界
    Result.row(0).setTo(Scalar(0));
    Result.col(0).setTo(Scalar(0));
    Result.row(Result.rows - 1).setTo(Scalar(0));
    Result.col(Result.cols - 1).setTo(Scalar(0));



}
