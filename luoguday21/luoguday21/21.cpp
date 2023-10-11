#include<iostream>
#include<algorithm>
using namespace std;
//Bookshelf B
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int N;//奶牛数目
	int n[100000];
	int B;//书架高度
	cin >> N >> B;
	for (int i = 1; i <= N; i++)
	{
		cin >> n[i];
	}
	sort(n + 1, n + N+1, greater<int>());//从大到小排序
	int S=0;//奶牛的高度
	int num = 0;
	while (S < B)
	{
		S += n[num+1];
		num++;
	}
	cout << num;
	return 0;
}