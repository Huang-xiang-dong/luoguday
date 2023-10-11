#include<iostream>
#include<string.h>
using namespace std;
//Êý×ÖÓÎÏ·
int main()
{
	string str;
	int cnt=0;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '1')
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}