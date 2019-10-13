#include <iostream>
using namespace std;
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	cout << "3+4的结果为： "<< add(3, 4) <<endl;
	system("pause");
	return 0;
}