#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 0;
	int c = 0;
	//前置和后置的区别：
	//前置先让变量进行加减， 然后进行表达式运算
	//后置先进行表达式运算，后让变量进行加减
	cout << "a的值为：" << a << endl;
	b = a++;
	cout << "b=a++=" << b << endl;
	cout << "a=" << a << endl;
	c = ++a;
	cout << "c=++a=" << c << endl;
	cout << "a=" << a << endl;
	b = a--;
	cout << "b=a--=" << b << endl;
	cout << "a=" << a << endl;
	c = --a;
	cout << "c=--a=" << c << endl;
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}