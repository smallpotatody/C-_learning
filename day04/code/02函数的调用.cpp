#include <iostream>
using namespace std;

//num1��num2Ϊ�β�
int fun(int num1, int num2)
{
	int sum = num1 * num2;
	return sum;
}
int main()
{
	int a = 3;
	int b = 4;
	//a��bΪʵ��
	cout << "3x4�Ľ��Ϊ�� " << fun(a, b) << endl;
	system("pause");
	return 0;
}