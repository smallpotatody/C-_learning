#include <iostream>
using namespace std;
#define month 12
int main()
{
	//常量定义方式：
	//1.#define 宏常量
	//2.const修饰的常量
	//month = 13;//错误，month是常量，一旦修改就报错
	cout << "一年共有：" << month << "月" << endl;
	const int day = 7;
	//day = 10;//错误，const修饰的变量也称为变量
	cout << "一周共有" << day << "天" << endl;
	system("pause");
	return 0;
}