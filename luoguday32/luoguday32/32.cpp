#include<iostream>
#include<string.h>
using namespace std;
//模拟赛
int cnt;
int main()
{
	bool a[1005][1005];
	int n, m, k;//n代表人数，m代表多少套模拟题
	//输入
	memset(a, 0, sizeof(a));
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int tmp;
			cin >> tmp;
			a[tmp][j]=1;//表示第j个人第tmp天打赛题
			//输入    
			/*
			6 3 7
			2 3 4
			2 5 7
			3 5 7
			1 3 5
			5 6 7
			1 2 3
			*/
			/*
			把这个循环就看做输入18次就行，n*m
			i=6,j=3
			  1  2  3                
			1 2          代表某个人第i天完成第j套模拟赛 
			2 2  1           
			3 1  2  1        
			4       1
			5 1  2  1    
			6    1         
			7       3     
			*/
		}
	}
	//输出
	for (int i = 1; i <= k; i++)//接下来的k天
	{
	    cnt = 0;//每天清零
		for (int j = 1; j <= m; j++)//m代表模拟题多少套
		{
			if (a[i][j])
			{
				cnt++;
			}//如果为1，则加1
		}
		cout << cnt << " ";
	}
	return 0;
}