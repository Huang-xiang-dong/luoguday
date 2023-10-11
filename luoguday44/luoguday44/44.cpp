#include<iostream>
using namespace std;
//整数大小比较
int main()
{
	int x, y;
	cin >> x >> y;
	if (x > y)
	{
		cout << ">";
	}
	if (x == y)
	{
		cout << "=";
	}
	if (x < y)
	{
		cout << "<";
	}
	return 0;
}