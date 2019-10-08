#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 23;
	int c = 34;
	int d = 0;
	//用三目运算符来比较三个数的最大值
	//在C++中三目运算符返回的是变量，可以继续赋值
	(a > b) ? a : b = 15;
	cout << "b=" << b << endl;
	d = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
	cout << "d的值为" << d << endl;
	system("pause");
	return 0;
}