#include<iostream>
using namespace std;
int main()
{
	int t;
	int book[101] = {0};
	for (int i = 1; i <= 3; i++)
	{
		cin >> t;
		book[t]++;
	}
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <=book[t]; j++)
			if (book[i] != 0)
			{
				cout <<i<< " ";
			}
	}
	return 0;
}