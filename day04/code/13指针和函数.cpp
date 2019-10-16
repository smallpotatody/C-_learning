#include <iostream>
using namespace std;
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a= " << a << endl;
	cout << "swap01 b= " << b << endl;
	return;
}

void swap02(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "swap02 *p1= " << *p1 << endl;
	cout << "swap02 *p2= " << *p2 << endl;
	return;
}

int main()
{
	//指针和函数
	//1.值传递
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	//2.地址传递
	//如果是地址传递，可以修饰实参
	int c = 10;
	int d = 20;
	cout << "c= " << c << endl;
	cout << "d= " << d << endl;
	swap02(&c, &d);
	cout << "改变后c= " << c << endl;
	cout << "改变后d= " << d << endl;
	system("pause");
	return 0;
}