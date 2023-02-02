#include<iostream>
using namespace std;
struct widget
{
	char name[20];
	int type;
	union id
	{
		int id_num;
		char id_n[20];
	}id;             //中间标识符视为是结构的一个成员
};

void main()
{
	widget prize = { "fool",13 };
	if (prize.type == 13)
	{
		cout << "prize.type==13" << endl;
		/*prize.id.id_n[0] = '4454';*/      //两种赋值方式：第一种只能
		cin >> prize.id.id_n;

	}
	for(int i=0;i<20;i++)
	{
		cout << prize.id.id_n[i] << endl;
	}


}