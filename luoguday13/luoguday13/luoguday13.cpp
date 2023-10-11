#include<iostream>
using namespace std;
//闰年展示
int x, y;//区间
int counter=0;//计数器
int years[100];//用来存储闰年的数组
bool ifyears(int year)//判断是不是闰年
{
	if (year % 4 == 0 && year % 100 != 0)//能被4整除但不能被100整除
	{
		return true;
	}
	else if (year % 400 == 0)//能被400整除
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	cin >> x >> y;
	for (int i = x; i <= y; i++)
	{
		if (ifyears(i))
		{
			years[counter++] = i;
		}
	}
	cout << counter << endl;
	for (int i = 0; i < counter; i++)
	{
		cout << years[i] << " ";
	}
	return 0;
}