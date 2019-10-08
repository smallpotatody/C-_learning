#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "输入三个数a、b、c的值：" << endl;
	cin >> a >> b >> c;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	if (a >= b)
	{
		if (a >= c)
		{
			cout << "最大值为" << a << endl;
		}
		else
		{
			cout << "最大值为" << c << endl;
		}
	}
	else
	{
		if (b >= c)
		{
			cout << "最大值为" << b << endl;
		}
		else
		{
			cout << "最大值为" << c << endl;
		}
	}
	system("pause");
	return 0;
}