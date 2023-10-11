#include<iostream>
using namespace std;
int primes[5000], Index = 0;
bool isprime[10001];
int main()
{
	int N;
	cin >> N;
	memset(&isprime, true, 10001 * sizeof(bool));
	isprime[0] = isprime[1] = false;//0和1都不是质数
	for (int i = 2; i <= N; i++)
	{
		if (isprime[i])
		{
			primes[Index] = i;
			for (int j = 2 * i; j <= N; j += i)
			{
				isprime[j] = false;
			}
			Index++;
		}
	}
	for (int i = 0; i <= Index; i++)
	{
		int count = 0;
		int prime = primes[i];
		int n = N;
		while (n > 0)
		{
			n /= prime;//分解质因子
			count += n;
		}
		cout << prime << " " << count << endl;
	}

}