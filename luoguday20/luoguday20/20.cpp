#include<iostream>
using namespace std;
//梦中的统计
int a[100];//全局变量都会初始化为0，如果写在下面就是局部变量，要初始化为0，否则会报错
int main()
{
	int M, N;
	cin >> M >> N;
	for (int i = M; i <= N; i++)	
	{

		int tmp = i;
		while (tmp > 0)
		{
			a[tmp % 10] ++ ;
			tmp /= 10;
		}

	}
	//输出
	for (int i = 0; i <= 9; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
 }