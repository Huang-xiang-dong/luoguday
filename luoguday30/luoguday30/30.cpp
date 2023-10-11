#include<iostream>
using namespace std;
//金币
int main()
{
	int k;//金币发放天数
	cin >> k;
	int money = 1;
	int total=0;//总共钱
	for (int i = 1; i <= k; i++)
	{
		total += money * money;//1*1+2*2+3*3+...
		money++;
		k -= i;
	}
	cout << total+k*money;//剩余的天数，比如7天等
	return 0;
}