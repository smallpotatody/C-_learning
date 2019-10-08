#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 3;
	cout << "a的值为" << a << endl;
	cout << "b的值为" << b << endl;
	//cout<<a==b<<endl;//错误，不加括号，会报语法错误
	cout <<"a==b\t"<< (a == b) << endl;
	cout << "a!=b\t" << (a != b) << endl;
	cout << "a>b\t" << (a > b) << endl;
	cout << "a<b\t" << (a < b) << endl;
	cout << "a>=b\t" << (a >= b) << endl;
	cout << "a<=b\t" << (a <= b) << endl;
	system("pause");
	return 0;
}