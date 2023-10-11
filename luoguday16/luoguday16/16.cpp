#include<iostream>
using namespace std;
//放大镜看杂志
//把原来的每一个字符都复制zr行，zc列
//四层for循环
int r, c, zr, zc;
char a[100][100];
int main()
{
	//输入
	cin >> r >> c >> zr >> zc;
	for (int i = 1; i <= r;i++)
	{
		for (int j = 1; j <= c; j++)
		{
			cin >> a[i][j];
		}
	}
	//输出
	for (int i = 1; i <= r; i++)//原行数
	{
		for (int k = 1; k <= zr; k++)//放大的行数
		{
			for (int j = 1; j <= c; j++)//原列数
			{
				for (int m = 1; m <= zc; m++)//放大的列数
				{
					cout << a[i][j];//用来控制输出的只是i和j,如j=1，就是第一列，然后zc=2，说明输出两遍j=1，相当于是放大输出的作用
				}
			}
			cout << endl;//输出完列要换行
		}
	}
	return 0;
}
