#include<iostream>
using namespace std;
//打印三角形和正方形
int n;//三角形或正方形的规模
int main()
{
	cin >> n;
	//正方形
	for (int i = 1; i <= n*n; i++)//第i行，第j列的数值为(i-1)*n+j
	{
		//小于10的数字前面要补0
		if (i < 10)
		{
			cout << "0" << i;
		}
		else
		{
			cout << i;
		}
		if (i % n == 0)//换行
		{
			cout << endl;
		}
	}
	//三角形
	//因为三角形是从1加到n，根据等差数列知个数为(1/2)*n*(n+1)
	cout << endl;
	int ans = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n-1; j >=i; j--)
		{
			cout << "  ";//两个空格，因为是01，02.......
		}
		while (ans<=i*(i+1)/2)//1,3,6,10
		{
			if (ans < 10)
			{
				cout << "0" << ans;
			}
			else
			{
				cout << ans;
			}
			ans++;
		}
		cout << endl;
	}

}