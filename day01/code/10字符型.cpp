#include <iostream>
using namespace std;

int main()
{
	//创建字符型变量
	char ch = 'a';
	char ch1 = 'A';
	char ch2 = 'B';
	cout << ch << endl;
	//字符型变量所占内存大小
	cout << "字符型变量所占内存大小为：" << sizeof(char) << "bytes" << endl;
	//字符型变量常见错误
	//char ch2 = "b";//创建字符型变量时候，要用单引号
	//char ch2 = 'abcd';//创建字符型变量时，单引号内只能有一个字符
	//字符型变量对应ASXCII编码
	//a-97;A-65;
	cout << "a的ASCII值为："<<(int)ch << endl;
	cout << "A的ASCII值为：" << (int)ch1 << endl;
	cout << "B的ASCII值为：" << (int)ch2 << endl;
	system("pause");
	return 0;
}