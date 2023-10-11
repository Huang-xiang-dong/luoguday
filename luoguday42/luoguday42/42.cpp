#include<iostream>
#include<cmath>
using namespace std;
//TIMSKO
int main()
{
	int m, n, k;
	int ans=0;
	cin >> m >> n >> k;//女性选手数量，男性选手数量，可以派去实习的对手数量
	for (int i = 1; i <= k; i++)
	{
		int j = k - i;//被掉走男生的人数
		ans = max(ans, min((m - i) / 2, n - j));
	}
	cout << ans;
	return 0;
}