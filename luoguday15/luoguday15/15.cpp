#include<iostream>
using namespace std;
//Hello,2020
int n, m, p,k;//n表示出题人数，m表示选手数，p表示正确预测数
int player[100000001];//选手数组
int main()
{
	cin >> n >> m >> p;
	for (int i = 1; i <=n; i++)
	{
		cin >> k;
		for (int i = 1; i <=k; i++)
		{
			int num;
			cin >> num;//可能最终排名第一的选手编号
			player[num]++;//每加一就代表有出题人预测了这个选手
		}
	}
	int ans = 0;
	for (int i = 1; i <=m; i++)//每个选手循环一次
	{
		if (player[i] == p)
		{
			ans++;//选手计数器
		}
	}
	cout << ans << endl;
	for (int i = 1; i <= m; i++)
	{
		if (player[i]==p)
		{
			cout << i << " ";
		}
	}
	return 0;
}