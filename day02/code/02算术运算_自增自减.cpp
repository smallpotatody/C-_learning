#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 0;
	int c = 0;
	//ǰ�úͺ��õ�����
	//ǰ�����ñ������мӼ��� Ȼ����б��ʽ����
	//�����Ƚ��б��ʽ���㣬���ñ������мӼ�
	cout << "a��ֵΪ��" << a << endl;
	b = a++;
	cout << "b=a++=" << b << endl;
	cout << "a=" << a << endl;
	c = ++a;
	cout << "c=++a=" << c << endl;
	cout << "a=" << a << endl;
	b = a--;
	cout << "b=a--=" << b << endl;
	cout << "a=" << a << endl;
	c = --a;
	cout << "c=--a=" << c << endl;
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}