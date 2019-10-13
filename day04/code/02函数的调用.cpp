#include <iostream>
using namespace std;

//num1、num2为形参
int fun(int num1, int num2)
{
	int sum = num1 * num2;
	return sum;
}
int main()
{
	int a = 3;
	int b = 4;
	//a、b为实参
	cout << "3x4的结果为： " << fun(a, b) << endl;
	system("pause");
	return 0;
}