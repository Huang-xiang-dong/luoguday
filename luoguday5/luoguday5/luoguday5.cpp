#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	//进制转换
	int a;//进制
	bool flag = true;
	string b;
	cin >> a >> b;
	int len = b.size();
	for (int i =0; i <len; i++)
	{
		if (b[i] != '0')//如果某个字符不为0
		{
			if (flag != true)cout << "+";
			cout << b[i] << "*" << a << "^" << len - i - 1;
		}
		flag = false;//后面改值，如果能够执行上面一步，说明要
	}
}