#include<iostream>
using namespace std;
//¼ÆËã½×³Ë
int fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*fac(n - 1);
	}
}
int n;
int main()
{
	cin >> n;
	cout << fac(n);
}