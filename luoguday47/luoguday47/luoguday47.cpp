#include<iostream>
using namespace std;
int main()
{
	int  a, b=0;
	cin >> a >> b;
	if (a== 1)
	{
		cout << 1;
		return 0;
	}
	
	long long ans = 1;
	while (b > 0 && ans<=1e9)
	{
		ans *= a;
		b--;
	}
	if (ans > 1e9)
	{
		cout << -1;
	}
	else cout << ans;
	return 0;
}