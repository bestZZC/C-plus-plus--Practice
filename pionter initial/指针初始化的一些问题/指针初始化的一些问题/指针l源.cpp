#include<iostream>
using namespace std;
int main()
{//ָ����handsome������*handsome
    char myName='zzc';
    char* handsome = &myName;   //��ʽһ������ֱַ�Ӹ���ָ��handsome �м��Ǹ���handsome������*handsome
    char* name;
    name = &myName;
    cout << "address of myName" << endl;
    cout << "��ʽһ��" << handsome;
    cout << "��ʽ���� " << name;
    return 0;

}