#include<iostream>
#include<string.h>
using namespace std;
//umi的神秘函数
int main()
{
	int n;//n代表字符串长度
	string x,y;//x和y代表两个字符串
	cin >> n;
	cin >> x;
	cin >> y;
	//找一个字符串z使得输出f(x,z)=y，已知x和y，找z，y中每一个字符都比x和z小
	//如果y中有一个字符比x或z大，就一定找不到解，直接输出-1结束。
	//如果y中每个字符都比x或z小，那么y就可以拿来作z了
	for (int i = 0; i < n; i++)
	{
		if (y[i] > x[i])
		{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << y << endl;//y也是z的一种输入
	return 0;
}