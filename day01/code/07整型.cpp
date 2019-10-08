#include <iostream>
using namespace std;

int main()
{
	//短整型（-32768~32767）
	short num1 = 10;
	//整型（）
	int num2 = 10;
	//长整型
	long num3 = 10;
	//长长整型
	long long num4 = 10;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	cout << "short:" << sizeof(num1) << endl;
	cout << "int:" << sizeof(num2) << endl;
	cout << "long:" << sizeof(num3) << endl;
	cout << "long long:" << sizeof(num4) << endl;
	system("pause");
	return 0;
}
