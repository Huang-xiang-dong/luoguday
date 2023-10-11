#include<iostream>
using namespace std;
//判断闰年
//是4的倍数但不是100的倍数，或者是400的倍数
int main()
{
	int n;
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}