#include<iostream>
#include<algorithm>
using namespace std;
//Uim的情人节礼物二
int main()
{
	int cnt = 1;//注意为1，比如输入123时，为第一个顺序，而不是第0个
	int N;
	int a[10000];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		char c;
		cin >>c;
		a[i] = c - '0';
	}
	while (prev_permutation(a, a + N))
	{
		cnt++;
	}
	cout << cnt;
	return 0;

}