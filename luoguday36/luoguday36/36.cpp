#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double p =(a + b + c)/2;
	double sum = sqrt(p * (p - a) * (p - b) * (p - c));
	cout<<fixed<<setprecision(1)<<sum;
}