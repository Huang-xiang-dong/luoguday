#include<iostream>
#include<iomanip>
using namespace std;
//蛇形方阵
int n;
int a[15][15] = { 0 };
int x = 1, y = 0;
int k = 1;
int main()
{
	cin >> n;
	while(k<=n*n)
	{
		while (y <n&&!a[x][y+1])//向右
		{
			a[x][++y] = k++;//先赋值再++
		}
		while (x < n &&!a[x+1][y])//向下
		{
			a[++x][y] = k++;
		}
		while (y >1 &&!a[x][y-1])//向左
		{
			a[x][--y] = k++;
		}
		while (x >1 && !a[x-1][y])//向上
		{
			a[--x][y] = k++;
		}
	}
	for (int i=1; i <= n; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			cout<<setw(3)<<a[i][j];
		}
		cout << endl;
	}
	return 0;
}