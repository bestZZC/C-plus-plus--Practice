//// OpenCVtest环境调试.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束
//#include<opencv2/opencv.hpp>
//using namespace cv;
//
//int main(int argc,char**argv)
//{
//
//	cv::Mat img = cv::imread(argv[1], -1);
//	if (img.empty())
//	{
//		return -1;
//	}
//	cv::namedWindow("example1", cv::WINDOW_AUTOSIZE);
//	cv::imshow("example1", img);
//	cv::waitKey(0);
//	cv::destroyWindow("example1");
//	return 0;
//}
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门使用技巧: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
    // 读取图片（使用图片的绝对路径，参考自己的图所在目录）
    Mat srcImg = imread("D:\\赵子程\\篮球服照片\\篮球.jpeg");
    if (srcImg.empty()) {
        cout << "could not load image..." << endl;
        return -1;
    }

    imshow("Test opencv setup", srcImg);
    /*// 显示灰度图
    Mat Gray;
    cvtColor(srcImg, Gray, 6);
    imshow("Gray", Gray);
    // 等待任意按键按下，不添加此语句图片会一闪而过
    waitKey(0);*/
    
    //腐蚀操作
    Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
    Mat dstImage;
    erode(srcImg, dstImage, element);
    //显示效果图
    imshow("【效果图】腐蚀操作", dstImage);
    waitKey(0);
    return 0;


    cout << "Hello,world." << endl;
    return 0;
}
