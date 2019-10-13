#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	//定义指针
	int * p;
	p = &a;
	cout << "a的地址为： " << &a << endl;
	cout << "指针p为： " << p << endl;

	//使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加 * 代表解引用，找到指针指向的内存中的数据
	
	*p = 100;
	cout << "*p= " << *p << endl;
	cout << "a= " << a << endl;
	system("pause");
	return 0;
}