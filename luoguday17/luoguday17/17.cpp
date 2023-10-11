#include<iostream>
using namespace std;
//征服西伯利亚、格林兰和挪威的北极圈
//如果有多个答案，输出x尽可能大，k尽可能小
int n;//一共需要筹集的钱
int k = 1;//一开始的钱和增加的钱
int a, b = 0;
int main()
{
	cin >> n;
	for (int x = 1; x <= 100; x++)
	{
		for (int k = 1; k <= 100; k++)
		{
			if ((7 * x + 21 * k) * 52==n )//x尽可能大，k尽可能小
			{
				a = x;
				b = k;
			}
		}
	}
	cout << a << endl;
	cout << b;
	return 0;
}