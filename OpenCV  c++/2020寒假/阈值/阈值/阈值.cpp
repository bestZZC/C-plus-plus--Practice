// 阈值.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
#define WINDOW_NAME "[WINDOW]"
int g_nthresholdValue = 100;
int g_nthresholdType = 0;
Mat srcImg, grayImg, dstImg;

//全局函数
static void ShowHelpText();
void on_Threshold(int, void*);
int main()
{
    VideoCapture capture(0);  //摄像头读入

    capture >> srcImg;
    cvtColor(srcImg, grayImg, COLOR_RGB2GRAY);
    namedWindow(WINDOW_NAME, WINDOW_AUTOSIZE);
    createTrackbar("Mode", WINDOW_NAME, &g_nthresholdType, 4, on_Threshold);
    createTrackbar("Parameter values", WINDOW_NAME, &g_nthresholdValue, 255, on_Threshold);
    on_Threshold(0, 0);
    while (1)
    {
        int key;
        key = waitKey(30);
        if ((char)key == 27)
            break;
    }
  
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

void on_Threshold(int, void*)
{
    threshold(grayImg, dstImg, g_nthresholdValue, 255, g_nthresholdType);
    imshow("WINDOW_NAME", dstImg);
}
