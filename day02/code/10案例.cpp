#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "����������a��b��c��ֵ��" << endl;
	cin >> a >> b >> c;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	if (a >= b)
	{
		if (a >= c)
		{
			cout << "���ֵΪ" << a << endl;
		}
		else
		{
			cout << "���ֵΪ" << c << endl;
		}
	}
	else
	{
		if (b >= c)
		{
			cout << "���ֵΪ" << b << endl;
		}
		else
		{
			cout << "���ֵΪ" << c << endl;
		}
	}
	system("pause");
	return 0;
}