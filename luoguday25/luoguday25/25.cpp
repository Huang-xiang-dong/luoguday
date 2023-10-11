#include<iostream>
#include<algorithm>
using namespace std;
//电梯里的爱情
int a[100000];
int main()
{
	int n;//乘坐电梯的人数
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);//先从小到大排序一下
	int front = 1;//队首为1
	int t = 0;//时间
	while (front != n + 1)
	{
		int c = a[front] - a[front - 1];//a[0]=0
		if (c == 0)//说明有人要达到相同楼层
		{
			t += 1;
		}
		else
		{
			t += (c * 6 + 5 + 1);//上一层楼加6秒，然后开门5秒，一个人走1秒
		}
		front++;//遍历
	}
	t += a[front-1] * 4;//因为最后的front会加到5
	cout << t;
	return 0;
}