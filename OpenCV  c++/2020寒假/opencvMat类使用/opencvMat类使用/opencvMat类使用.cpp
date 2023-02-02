// opencvMat类使用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
void demo1();
void demo2();
int main()
{
    demo2();
}
void demo1()            //create函数输出4*4矩阵
{
    cout << "6666" << endl;
    Mat m;
    m.create(4, 4, CV_8UC1);
    cout << "m:" << m << endl;
}
void demo2()                //随机矩阵
{
    Mat R = Mat(300, 300, CV_8UC3);
    randn(R, Scalar(10, 100, 200), Scalar(10, 10, 10));
    cout << "R矩阵 :" << endl << R << endl;
    imshow("随机矩阵", R);
    waitKey();//保持窗口显示
   
    
}
void DrawEllipse(Mat img,double angle )            //椭圆
{
    int thickness = 2;
    int linetype = 8;
   /* ellipse(img,
        Point(WINDOW_WIDTH / 4, WINDOW_WIDTH / 2),
        Size(WINDOW_WIDTH / 4, WINDOW_WIDTH / 16),
        angle,
        0, 360,
        Scalar(255, 129, 0),
        thickness,
        linetype

    );*/
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
