#include<iostream>
#include<iomanip>
using namespace std;
//地球人口承载力估计
int main()
{
	double x, a, y, b;//代表能够养活x忆人a年，或能够养活y亿人b年
	cin >> x >> a >> y >> b;
	//fixed表示输出固定以小数点表示法显示，setprecision表示输出小数点后要显示的位数
	cout << fixed << setprecision(2) << (a * x - b * y) / (a - b) << endl;
	return 0;
}