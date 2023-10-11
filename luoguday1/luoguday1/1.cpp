//题目描述
/*在一个旧式的火车站旁边有一座桥，其桥面可以绕河中心的桥墩水平旋转。一个车站的职工发现桥的长度最多能容纳两节车厢，
果将桥旋转180度，则可以把相邻两节车厢的位置交换，用这种方法可以重新排列车厢的顺序。于是他就负责用这座桥将进站的车厢按车厢号从小到大排列。他退休后，火车站决定将这一工作自动化，其中一项重要的工作是编一个程序，输入初始的车厢顺序，计算最少用多少步就能将车厢排序。*/
//输入格式
//输入共两行。
//第一行是车厢总数
//N
//第二行是
//N 个不同的数表示初始的车厢顺序。
//
//输出格式
//一个整数，最少的旋转次数。
//输入：4 4321
//输出 6
//理解：4321(0),3421(1),3241(2),3214(3),2314(4),2134(5),1234(6)
/*BubbleSort函数（冒泡排序）：
双重循环，外层循环控制趟数，执行n - 1趟，内层循环控制每趟的次数，每趟执行n - i - 1次；
若a[j] > a[j + 1]，交换，count++，记录交换的次数；
返回交换的次数。

主函数：
读取车厢的总数N，动态分配N块int型内存空间给carriages（carriages = (int*)malloc(sizeof(int) * N)），读取车厢的顺序，存入carriages数组；
调用BubbleSort函数（BubbleSort(carriages, N)），返回值赋给times，并输出times，释放动态分配的内存（free(carriages)）*/

#include<iostream>
using namespace std;
int BubbleSort(int a[],int n)//冒泡排序,将有n个元素的数组从小到大排序，返回交换的次数
{
	int count=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				count++;//记录排序次数
			}
		}
	}
	return count;
}
int main()
{
	int N;//车厢总节数
	int times;//排序的次数
	//cout << "请输入车厢总节数：" << endl;
	cin >> N;
	//int carriages[N];//很严重的问题是数组的索引不能是变量
	int *carriages;//车厢的顺序
	carriages = (int*)malloc(sizeof(int) * N);//分配N块int空间给carriages，后面的*是乘
	//cout << "请输入车厢排序顺序：" << endl;
	for (int  i = 0; i <N ; i++)
	{
		cin >> carriages[i];
	}
	times = BubbleSort(carriages, N);
	cout << times << endl;
	free(carriages);//最后要释放掉内存空间
	return 0;
}