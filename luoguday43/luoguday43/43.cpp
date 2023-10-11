#include<iostream>
#include<cmath>
using namespace std;
//旗鼓相当的对手
int a[1010][5];
int sum[1010];
int N;
int cnt=0;//计数器
int main()
{
	
	cin >> N;//N表示几名同学
	for (int i = 1; i <= N; i++)
	{
		cin >> a[i][1]>>a[i][2]>>a[i][3];//输入每名同学的语文、数学、英语成绩
		sum[i] = a[i][1]+a[i][2]+a[i][3];//同学所有成绩总和
	}
	//和其他同学比较
	for (int i = 1; i <= N; i++)
	{
		for (int j = i + 1; j <= N; j++)
		{
			if (abs(a[i][1] - a[j][1]) <= 5 && abs(a[i][2] - a[j][2]) <= 5 && abs(a[i][3] - a[j][3] <= 5) && abs(sum[i] - sum[j]) <= 10)
			{
				cnt++;
			}
		}
	}
	cout << cnt<<endl;
	return 0;
}