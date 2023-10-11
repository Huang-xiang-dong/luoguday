#include<iostream>
using namespace std;
//质因子分解
int main()
{
	int a[10000] = { 0 };
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++)
	{
		int tmp = i;
		for (int j = 2; j <= i; j++)
		{
			while (tmp % j == 0) 
			{
				a[j]++;
				tmp /= j;
			}
		}
	}
	for (int i = 2; i <= N; i++)
	{
		if (a[i])
		{
			cout <<i<<" "<< a[i]<<endl;
		}
	}
	return 0;
}