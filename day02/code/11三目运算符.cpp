#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 23;
	int c = 34;
	int d = 0;
	//����Ŀ��������Ƚ������������ֵ
	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b) ? a : b = 15;
	cout << "b=" << b << endl;
	d = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
	cout << "d��ֵΪ" << d << endl;
	system("pause");
	return 0;
}