#include<iostream>
using namespace std;
//邮递员、送奶工、垃圾清洁工问题
int a, b, c, d;
int cnt = 0;//计数器
int dog(int x)
{
	if (x % (a + b) > 0 && x % (a + b) <= a && x % (c + d) > 0 && x % (c + d) <= c)
	{
		cnt = 2;
		return cnt;
	}
	if ((x % (a + b) > a || x % (a + b) == 0) && (x % (c + d) > c || x % (c + d) == 0))
	{
		cnt = 0;
		return cnt;
	}
	else
	{
		cnt = 1;
		return cnt;
	}
}
int main()
{
	int people[100];
	int p, m, g;

	cin >> a >> b >> c >> d;//一条狗暴躁a分钟，安静b分钟，另一条狗暴躁c分钟，安静d分钟
	//cin >> p >> m >> g;//p表示邮递员到达18号房子的时刻，m代表送奶工的时刻，g代表垃圾清理工的时刻
	//显然a+b为一个时间周期，然后c+d为一个时间周期,如果%完小于a说明此时狗处于暴躁时刻，大于等于a小于a+b狗处于安静时刻
	for (int i = 0; i < 3; i++)
	{
		cin >> people[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (dog(people[i]) == 2)
		{
			cout << "both"<<endl;
		}
		if (dog(people[i])== 1)
		{
			cout << "one" << endl;
		}
		if (dog(people[i])== 0)
		{
			cout << "none" << endl;
		}
	}
	return 0;
}