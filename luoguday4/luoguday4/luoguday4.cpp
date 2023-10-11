#include<iostream>
using namespace std;
//题目：赵神牛的游戏

int main()
{
	int flag = 0;//用来做哨兵
	int a[100];
	int k, m, n;//k代表法力值，m代表有几个技能，n代表boss血量
	int consume, damage;//consume代表消耗的法力值，damage代表伤害
	cin >> k >> m >> n;
	for (int i = 0; i < m; i++)
	{
		cin >> consume >> damage;
		//消耗法力值为0，伤害大于0肯定可以
		//伤害小于0肯定不行
		if ((!consume && damage) || (consume && (k / consume) * damage >= n))//第一种情况是法力值为0，伤害值大于0肯定可以，第二种情况是法力值不为0，但是释放的技能伤害大于boss血量
			//输出可以杀死boss的技能序号，如果有多个，则按从小到大的顺序输出
		{
			cout << i + 1 <<" ";
			flag = 1;
		}
	}
		if (!flag)
		{
			cout << -1;
		}
	return 0;
}
