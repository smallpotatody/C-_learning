#include <iostream>
using namespace std;

int main()
{
	//野指针
	//在程序中，尽量避免出现野指针
	int * p = (int *)0x1100;
	//cout << *p << endl;//错误，系统持续占用
	system("pause");
	return 0;
}