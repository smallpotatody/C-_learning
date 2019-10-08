#include <iostream>
using namespace std;

int main()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	float a2 = 10.0f;
	float b2 = 3.0f;
	cout << "a1=" << a1 << endl;
	cout << "b1=" << b1 << endl;
	cout <<"a1+b1=: "<< a1 + b1 << endl;
	cout << "a1-b1=: " << a1 - b1 << endl;
	cout << "a1*b1=: " << a1 * b1 << endl;
	//两个整数相除，结果依然是整数，将小数部分去除
	cout << "a1/b1=: " << a1 / b1 << endl;
	cout << "a1%b1=: " << a1 % b1 << endl;
	cout << "两个浮点数10.0和3.0相除结果为：" << a2 / b2 << endl;
	system("pause");
	return 0;
}