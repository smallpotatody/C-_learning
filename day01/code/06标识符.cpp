#include <iostream>
using namespace std;

int main()
{
	//1.标识符不可以是关键字
	//int int=10;
	//2.标识符是由字母、数字、下划线构成

	int a2_f = 10;

	//3.标识符第一个字符只能是字母或下划线
	//2ab_c = 10;//错误
	//4.标识符是区分大小写的

	int a = 10;
	int A = 20;

	//a和A是不一样的

	cout <<"a=" << a << endl;
	system("pause");
	return 0;
}