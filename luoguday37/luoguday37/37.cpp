#include<iostream>
using namespace std;
//数的性质
int main()
{
	int x;
	int sum = 0;
	int k[5] = {0};
	cin >> x;
	if (x % 2 == 0)sum++;
	if (x > 4 && x <= 12)sum++;
	if (sum == 2)k[1] = 1;
	if (sum == 1 || sum == 2)k[2] = 1;
	if (sum == 1)k[3] = 1;
	if (sum == 0)k[4] = 1;
	for (int i = 1; i <= 4; i++)
	{
		cout << k[i] << " ";
	}
	return 0;
}