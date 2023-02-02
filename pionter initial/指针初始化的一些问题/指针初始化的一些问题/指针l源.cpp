#include<iostream>
using namespace std;
int main()
{//指针是handsome而不是*handsome
    char myName='zzc';
    char* handsome = &myName;   //方式一：将地址直接赋给指针handsome 切记是赋给handsome而不是*handsome
    char* name;
    name = &myName;
    cout << "address of myName" << endl;
    cout << "方式一：" << handsome;
    cout << "方式二： " << name;
    return 0;

}