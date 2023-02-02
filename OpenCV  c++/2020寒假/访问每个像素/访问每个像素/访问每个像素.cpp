// 访问每个像素.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace std;
using namespace cv;



void colorReduce(Mat& inputImage, Mat& outputImage, int div);

int main()
{
    Mat srcImg = imread("D:\\赵子程\\篮球服照片\\篮球.jpeg",0);
    imshow("原始图像", srcImg);
    
    //Mat dstImg;
    //dstImg.create(srcImg.rows, srcImg.cols, srcImg.type());//按照原图的行数列数大小创建

    ///*记录运行时间*/
    //double time0 = static_cast<double>(getTickCount());//记录起始时间
    //colorReduce(srcImg, dstImg,10);
    //time0 = ((double)getTickCount() - time0) / getTickFrequency();//得到运行时间

    //cout << "color space reduction运行时间：" << time0 <<" s"<< endl;
    //imshow("效果图", dstImg);


    std::cout << "Hello World!\n";
    
}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

void colorReduce(Mat& inputImage, Mat& outputImage, int div)
{
    outputImage = inputImage.clone();
    int rowNumber = outputImage.rows;
    int colNumber = outputImage.cols;
    for (int i = 0; i < rowNumber; i++)
    {
        uchar* data = outputImage.ptr<uchar>(i);//指针访问
        for (int j = 0; j < colNumber; j++)
        {
            data[j] = data[j] / div * div;
        }
    }
}
