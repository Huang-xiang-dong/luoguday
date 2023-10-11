#include<iostream>
#include<string.h>
using namespace std;
//文字处理软件
string str;//创建一个初始字符串
int q;//q代表操作次数
string insert1;//插入的字符串
int start1,how;//保留读取字符串的开头和读取多少个字符串
int op;//操作数
int a;//第几个字符前插入
string str1;//需要插入的字符串
string str2;//需要查找的字符串
int main()
{
	cin >> q;
	cin >> str;
	for (int i = 0; i < q; i++)
	{
		cin >> op;
		if (op == 1)//操作1
		{
			cin >> insert1;
			str+=insert1;
			cout << str << endl;
		}
		if (op == 2)//操作2
		{
			cin >> start1 >> how;
			str = str.substr(start1, how);
			cout << str << endl;
		}
		if (op == 3)//操作3
		{
			cin >> a;
			cin >> str1;
			str = str.insert(a, str1);
			cout << str << endl;
		}
		if (op == 4)//操作4
		{
			cin >> str2;//需要查找的字符串
			if (str.find(str2)<200)//如果找不到，会输出一个很大的数
			{
				cout << str.find(str2) << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
	}
	return 0;
}