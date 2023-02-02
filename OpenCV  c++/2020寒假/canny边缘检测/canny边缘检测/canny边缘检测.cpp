// canny边缘检测.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<opencv2/opencv.hpp>
using namespace cv;


int main()
{
 
    VideoCapture capture(0);  //摄像头读入
    Mat edges;
    while (1)
    {
        Mat frame;      //存储每一帧的图像
        capture >> frame;
        /*namedWindow("old video");*/
        imshow("old video", frame);
        cvtColor(frame, edges, COLOR_BGR2GRAY);//转为灰度
        //模糊并降噪
        //blur(edges, edges, Size(7, 7));
        //边缘检测并显示
       // Canny(edges, edges, 0,30,3);
        
        imshow("gray", edges);//处理过后的图像
        waitKey(0);



    }
    
    std::cout << "Hello World!\n";
    return 0;
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
