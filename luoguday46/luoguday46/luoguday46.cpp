#include<iostream>
using namespace std;
const int MAX = 100005;
struct Ticket
{
	//赠票的价格，最晚使用时间和是否使用过
	int price;
	int time;
	int used;
}q[MAX];
int head, tail, n, cost;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int op, price, time;
		cin >> op >> price >> time;
		if (op == 0)//如果是坐地铁，直接把价格加到cost里面
		{
			cost += price;
			//将一张新的赠票加入到数组末尾，这张票的最晚使用时间是当前时间+45
			q[tail].time = time + 45;
			//赠票面额就是地铁票价
			q[tail++].price = price;
		}
		else
		{
			//先用一个循环把过期票扔掉
			while (head < tail && q[head].time < time)//小于当前时间
			{
				head++;
			}
			bool found = false;//假设没有合适的赠票
			for (int j = head; j < tail; j++)
			{
				//循环所有剩余的票，这些一定没过期，因为题目是按时间顺序给我们的
				if (q[j].price >= price && q[j].used ==0)
				{
					//如果价格合适，并且这些票没用过，标记找到
					found = true;
					q[j].used = 1;
					break;
				}
			}
			//如果没找到，就只能买票了
			if (!found) cost += price;
		}
	}
	cout << cost;
	return 0;
}