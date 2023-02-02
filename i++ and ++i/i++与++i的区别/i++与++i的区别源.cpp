#include<iostream>
using namespace std;
void main()
{
	int a = 10;
	for (int i = 1; i < 10; i++)

	{
		if (a == 0)
		{
			break;
		}
		for (int j = 1; j <= a; j++)
		{
			cout << " " ;

		}
		for (int k = 1; k <= 21 - 2 * a; k++)
		{
			cout << "*" ;
		}
		for (int j = 1; j <= a; j++)
		{
			cout << " " ;

		}
		a = a - 1;
		cout << endl;
	}

}