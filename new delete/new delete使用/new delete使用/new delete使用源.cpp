#include<iostream>
using namespace std;
int main()
{
	int m = 9;
	int* a = new int;
	a = &m;
	cout << a;
	delete a;

	return 0;
}