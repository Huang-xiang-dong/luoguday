#include<iostream>
using namespace std;
//奶牛游戏
int main()
{
	long long N;
	int count = 0;//计分器
	cin >> N;//输入分数
	while (N != 1)
	{
		if (N % 2 == 1)//如果N是奇数
		{
			N = 3 * N + 1;
			count++;
		}
		if (N % 2 == 0)//如果N是偶数
		{
			N = N / 2;
			count++;
		}
	}//N=1时代表游戏结束了
	cout << count<< endl;
	return 0;
}