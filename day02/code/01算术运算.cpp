#include <iostream>
using namespace std;

int main()
{
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;
	float a2 = 10.0f;
	float b2 = 3.0f;
	cout << "a1=" << a1 << endl;
	cout << "b1=" << b1 << endl;
	cout <<"a1+b1=: "<< a1 + b1 << endl;
	cout << "a1-b1=: " << a1 - b1 << endl;
	cout << "a1*b1=: " << a1 * b1 << endl;
	//������������������Ȼ����������С������ȥ��
	cout << "a1/b1=: " << a1 / b1 << endl;
	cout << "a1%b1=: " << a1 % b1 << endl;
	cout << "����������10.0��3.0������Ϊ��" << a2 / b2 << endl;
	system("pause");
	return 0;
}