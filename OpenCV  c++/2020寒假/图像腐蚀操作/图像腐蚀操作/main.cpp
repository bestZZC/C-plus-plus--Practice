
#include <iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
int main()
{
    // ��ȡͼƬ��ʹ��ͼƬ�ľ���·�����ο��Լ���ͼ����Ŀ¼��
    Mat srcImg = imread("D:\\���ӳ�\\�������Ƭ\\����.jpeg");
    if (srcImg.empty()) {
        cout << "could not load image..." << endl;
        return -1;
    }

    imshow("Test opencv setup", srcImg);
    // ��ʾ�Ҷ�ͼ
    Mat Gray;
    cvtColor(srcImg, Gray, 6);
    imshow("Gray", Gray);
    // �ȴ����ⰴ�����£�����Ӵ����ͼƬ��һ������
    waitKey(0);

    cout << "Hello,world." << endl;
    return 0;
}