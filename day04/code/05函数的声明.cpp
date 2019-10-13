#include <iostream>
using namespace std;
//函数声明
int max(int a, int b);
int main()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

//函数定义
int max(int a, int b)
{
	return a > b ? a : b;
}