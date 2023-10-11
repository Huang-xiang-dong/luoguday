#include<iostream>
using namespace std;
int main()
{
	long long a1;//第一项
	long long a2;//第二项
	long long n;//项数
	cin >> a1 >> a2>>n;
	long long d = a2 - a1;//等差
	long long total=0;//总数
	long long num[1000] = { 0 };
	//赋值
	for (int i = 1; i <= n; i++)
	{
		num[i] = a1 + (i - 1) * d;
		total += num[i];
	}
	cout << total;
	return 0;
}