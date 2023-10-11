#include<iostream>
#include<iomanip>
using namespace std;
//输出保留三位小数的浮点数
int main()
{
	float n;
	cin >> n;
	cout << fixed << setprecision(3) << n;
	return 0;
}