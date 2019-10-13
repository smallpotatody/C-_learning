#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	//∂®“Â÷∏’Î
	int * p;
	p = &a;
	cout << "sizeof(int *) = £∫ " << "\t" << sizeof(int *) << endl;
	cout << "sizeof(p) = £∫ " << "\t\t" << sizeof(p) << endl;
	cout << "sizeof(float *) = £∫ " << "\t" << sizeof(float *) << endl;
	cout << "sizeof(double *) = £∫ " << "\t" << sizeof(double *) << endl;
	cout << "sizeof(char *) = £∫ " << "\t" << sizeof(char *) << endl;
	
	system("pause");
	return 0;
}