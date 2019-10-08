#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 0;
	int c = 4;
	int d = 0;
	cout <<"a\t"<< a << endl;
	cout << "b\t" << b << endl;
	cout << "c\t" << c << endl;
	cout << "d\t" << d << endl;
	cout << "!a\t" << !a << endl;
	cout << "!!a\t" << !!a << endl;
	a = 10;
	cout << "a&&b\t" << (a && b) << endl;
	cout << "a&&c\t" << (a && c) << endl;
	cout << "a||b\t" << (a || b) << endl;
	cout << "b||d\t" << (b || d) << endl;
	system("pause");
	return 0;
}