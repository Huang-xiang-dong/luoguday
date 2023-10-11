#include<iostream>
#include<iomanip>
using namespace std;
//赫尔曼的出租车几何学
double R;
#define Pi 3.14159265358979323846
int main()
{
	cin >> R;//输入半径
	cout <<fixed<<setprecision(5)<<Pi*(R*R)<<endl;
	cout <<fixed<<setprecision(5)<< 2 * R * R;
	return 0;
}
