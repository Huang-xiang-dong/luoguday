#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	bool flag[1000];
	int a[1000] = {0};
	int N;
	int temp;
	int cnt=0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		if (flag[temp] == 1)
		{
			continue;
		}
		a[++cnt]=temp;
		flag[temp] = 1;
	}
	sort(a + 1, a + cnt + 1);//从小到大排序
	cout << cnt << endl;
	for (int i = 1; i <= cnt; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}