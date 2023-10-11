#include<iostream>
using namespace std;
int x_1[1000], y_1[1000], x_2[1000], y_2[1000];
int row[1000], col[1000];
int main()
{
	int n, m, sum = 0;
	int finalround;//最后被轰炸的轮数
	int x, y;
	cin >> n >> m >> x >> y;//n和m代表的是矩阵的大小，x代表轰炸了几次，y代表几个关键点
	for (int i = 1; i <= x; i++)
	{
		cin >> x_1[i] >> y_1[i] >> x_2[i] >> y_2[i];//接下来是x行，每行四个整数x1，y1，x2，y2，表示被轰炸的矩阵的左上角坐标到右下角坐标
	}
	for (int i = 1; i <= y; i++)
	{
		cin >> row[i] >> col[i];//接下来是y行，每行两个整数，表示关键点的坐标
		sum = 0;
		for (int j = 1; j <= x; j++)//判断每个关键点被轰炸的次数
		{
			if (row[i] >= x_1[j] && row[i] <= x_2[j] && col[i] >= y_1[j] && col[i] <= y_2[j])//判断是否在区域内
			{
				sum++;
				finalround = j;
			}
		}
		if (sum > 0)
		{
			cout << "Y" << " " << sum << " " << finalround << endl;//输出有3个，Y代表是否被轰炸，第二个代表被炸了几次，第三个代表最后一次被炸是第几轮
		}
		else
		{
			cout << "N" << endl;
		}
	}
	return 0;
}