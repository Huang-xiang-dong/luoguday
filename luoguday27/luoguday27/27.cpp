#include<iostream>
#include<string.h>
using namespace std;
//±í´ïÊ½À¨ºÅÆ¥Åä
int main()
{
	string str;
	int b = 0;
	int a = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ')')
		{
			b++;
		}
		if (b > a)
		{
			cout << "NO";
			return 0;
		}
		if (str[i] == '(')
		{
			a++;
		}
	}
	if (a != b)cout << "NO";
	else cout << "YES";
}