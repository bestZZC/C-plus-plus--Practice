#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/opencv.hpp>

#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    VideoCapture capture(0);  //摄像头读入
    Mat edges;
    
        Mat frame;      //存储每一帧的图像
        capture >> frame;
        namedWindow("input");
        namedWindow("after flood ");
        imshow("old video", frame);
       // cvtColor(frame, edges, COLOR_BGR2GRAY);//转为灰度
        //模糊并降噪
        bilateralFilter(frame, edges, 5, 10, 5);
       /*GaussianBlur (edges, edges, Size(7, 7),0,0);*/
        //边缘检测并显示
        /*Canny(edges, edges, 0, 30, 3);*/

        imshow("canny后的视频", edges);//处理过后的图像
        std::cout << "Hello World!\n";
        waitKey(0);



    

    

    /*Mat input = imread("1.jpg",1);
    if (input.empty()) std::cerr << "Could not open file" << std::endl; return (1);
    namedWindow("old video");
    namedWindow("after operation");
    imshow("old video", input);
   
    Mat output;
    GaussianBlur(input, output, Size(5, 5), 0, 0);
    imshow("after operation[]",output);
    waitKey(0);
    std::cout << "Hello World!\n";*/
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
