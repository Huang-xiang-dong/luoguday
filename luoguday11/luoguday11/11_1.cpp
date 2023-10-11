#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;//输入小写
	cout << (char)(a - ('a' - 'A'));//输出大写
	return 0;
}