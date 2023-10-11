#include<iostream>
using namespace std;
//过河卒
void horse(long long x, long long y)
{
	//标记一下马踩卒的位置
	a[x][y] = 1;
	a[x - 1][y - 2] = 1;
	a[x - 2][y - 1] = 1;
	a[x - 2][y + 1] = 1;
	a[x - 1][y + 2] = 1;
	a[x + 1][y - 2] = 1;
	a[x + 2][y - 1] = 1;
	a[x + 2][y + 1] = 1;
	a[x + 1][y + 2] = 1;
}
long long a[100][100] = { 0 };//棋盘
int main()
{
	//A(0,0)//计算小卒从A到B的路径，马踩过河卒
	int A = a[0][0];
	int n, m;//B的位置
	int xh, yh;//马的位置
	cin >> n >>  >> xh >> yh;
	//f[i][j]=f[i−1][j]+f[i][j−1]
	horse(xh, yh);
	for (int i = 1; i <= n; i++)
	{
		for (int i = 1; i <= m; i++)
		{

		}
	}

}