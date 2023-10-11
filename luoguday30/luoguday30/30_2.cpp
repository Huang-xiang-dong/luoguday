#include<iostream>
using namespace std;
int main()
{
	int k;//天数
	cin >> k;
	int total = 0;//金币总数
	int money = 1;//金币数
	int a;//后面的几天可获得金币数
	a = money;//第一天一个金币
	for (int i = 1; i <= k; i++)
	{
		total += money;
		a--;//发了一天//相当于用金币来代替天数
		if (a == 0)
		{
			money++;
			a = money;
		}
	}
	cout << total;
	return 0;
}