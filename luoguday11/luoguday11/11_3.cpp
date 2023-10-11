#include<iostream>
#include<algorithm>
using namespace std;
//寻找最小值
int main()
{
	int n;//代表输入的数字个数
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int min = a[0];//假设一开始最小的是a[0]
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << min << endl;
	return 0;
}