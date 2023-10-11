#include<iostream>
#include<iomanip>
using namespace std;
//再分肥宅水
int main()
{
	double t;
	int n;//t代表有多少毫升肥宅快乐水，n代表要分给多少同学
	cin >> t>>n;
	cout << fixed << setprecision(3) << t / n << endl << 2 * n << endl;
	return 0;
}