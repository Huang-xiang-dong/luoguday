#include<iostream>
using namespace std;
//猴子吃桃
int n;//n表示天数
int peach = 1;//最后一天剩余一个桃子
int main()
{
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		peach = (peach + 1) * 2;
	}
	cout << peach;
	return 0;
}