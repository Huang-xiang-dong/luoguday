#include<iostream>
using namespace std;
//明明的随机数
int main()
{
	//桶排序
	int temp;
	int cnt=0;//计数器
	int N;//生成的随机数个数
	cin >> N;
	int a[1002] = { 0 };//注意一开始桶数组一定要为0
	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		if (a[temp])
		{
			continue;//如果出现过了，则进入下一个循环
		}
		a[temp]++;
		cnt++;
	}
	cout << cnt << endl;
	for (int i = 1; i <=1000 ; i++)
	{
		/*for (int j = 1; j <= a[i]; j++)
		{
			cout << i << " ";
		}*/
		if (a[i])
		{
			cout << i <<" ";
		}
	}
	cout << endl;
	return 0;
}