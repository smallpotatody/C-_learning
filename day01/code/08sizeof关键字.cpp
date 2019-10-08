#include <iostream>
using namespace std;

int main()
{
	float n = 2.0;
	int c = 3;
	char s = '123';

	cout << "float:" << sizeof(n) << " bytes" << endl;
	cout << "int:" << sizeof(int) << " bytes" << endl;
	cout << "char:" << sizeof(char) << " bytes" << endl;
	system("pause");
	return 0;
}
