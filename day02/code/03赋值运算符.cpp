#include <iostream>
using namespace std;

int main()
{
	//赋值运算符
	int a = 10;
	cout << "a=" << a << endl;
	a += 2;
	cout << "a+=2;的结果" << a << endl;
	a -= 2;
	cout << "a-=2;的结果" << a << endl;
	a *= 2;
	cout << "a*=2;的结果" << a << endl;
	a /= 2;
	cout << "a/=2;的结果" << a << endl;
	a %= 2;
	cout << "a%=2;的结果" << a << endl;
	system("pause");
	return 0;
}