#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
//白细胞计数
int main()
{
	int n;
	double a[300];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);//默认升序的比较排序函数
	double jas = 0;//计数器
	for (int i = 1; i < n - 1; i++)//因为要把数值最大的样本和数值最小的样本去掉，因为前面的排序，所以只要把第0个和最后一个去掉即可
	{
		jas += a[i];//去除了最大值和最小值后的总和
	}
	cout << fixed << setprecision(2) << jas / (n - 2) << " " << max(fabs(a[1] - jas / (n - 2)), fabs(a[n - 2] - jas / (n - 2)));//因为已经排好顺序了，所以绝对值最大值不是开头就是末尾。
	return 0;
}