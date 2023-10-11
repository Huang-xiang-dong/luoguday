#include<iostream>
using namespace std;
//西游记公司
int main()
{
	long long a, b, c, d, e, f;
	int n;//八戒每秒偷电脑数
	char m;//用来输入:号
	cin >> a >> m >> b >> m >> c;
	cin >> d >> m >> e >> m >> f;
	cin >> n;
	long long hour = d - a;//小时数
	long long minute = e - b;//分钟数
	long long second = f - c;//秒数
	long long sum = n * (3600 * hour + 60 * minute + second);
	cout << sum;
	return 0;
}