#include<iostream>
using namespace std;
//The Robot Plow G
int main()
{
	int p[10000][10000];
	int X, Y, I;//X代表长方形的长(列)，Y代表长方形的宽(行)，I代表指令
	cin >> X >> Y >> I;
	int XLL, YLL, XUR, YUR;//(XLL,YLL)代表左下角的坐标，(XUR,YUR)代表右上角的坐标
	for (int i = 1; i <= I; i++)
	{
		cin >> XLL >> YLL >> XUR >> YUR;
		for (int j = XLL; j <=XUR ; j++)//从左到右
		{
			for (int k = YLL; k <= YUR; k++)//从上到下
			{
				p[j][k] = 1;//被犁过标记为1
			}
		}
	}
	int cnt = 0;//计数器
	for (int i = 1; i <= X; i++)
	{
		for (int j = 1; j <= Y; j++)
		{
			if (p[i][j] == 1)
			{
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}