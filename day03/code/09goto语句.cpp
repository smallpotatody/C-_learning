#include <iostream>
using namespace std;

int main()
{
	cout << "1.XX" << endl;
	cout << "2.xx" << endl;
	goto FLAG;
	cout << "3.xx" << endl;
	cout << "4.xx" << endl;
	cout << "5.xx" << endl;
	FLAG:
	cout << "6.xx" << endl;
	system("pause");
	return 0;
}