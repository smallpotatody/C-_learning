#include <iostream>
using namespace std;

int main()
{
	cout << "9X9乘法口诀表" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " X " << i << " = " << i*j<<"\t" ;
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "99加法表" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = i; j <10; j++)
		{
			cout << i << " + " << j << " = " << i+j << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}