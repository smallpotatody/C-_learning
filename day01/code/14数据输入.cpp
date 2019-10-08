#include <iostream>
using namespace std;
#include <string>

int main()
{
	//整型
	int a = 0;
	cout << "请给整型变量a赋值：" ;
	cin >> a;
	cout << a << endl;

	//浮点型
	float b = 1.1f;
	cout << "请给浮点型变量b赋值：" ;
	cin >> b;
	cout << b << endl;

	//字符型
	char ch = 'a';
	cout << "请给字符型变量ch赋值：" ;
	cin >> ch;
	cout << ch << endl;

	//字符串型
	string str = "";
	cout << "请给字符串型变量str赋值：" ;
	cin >> str;
	cout << str << endl;
	
	//bool型
	bool flag = false;
	cout << "请给bool型变量flag赋值：" << endl;
	cin >> flag;
	cout << flag << endl;
	system("pause");
	return 0;
}