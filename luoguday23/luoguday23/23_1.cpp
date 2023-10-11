#include<iostream>
#include<algorithm>
using namespace std;
//Uim的情人节礼物-其一
int N;
int a[10000];
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];//原定序列
	}
	if (prev_permutation(a, a + N))
	{
		for (int i = 0; i < N; i++)
		{
			cout << a[i]<<" ";
		}
	}
	return 0;
}