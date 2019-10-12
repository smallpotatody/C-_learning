#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	int num = 100;
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;
	cout << "水仙花数有：" << endl;
	do 
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		sum = a*a*a + b*b*b + c*c*c;
		if (sum == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num <= 999);
	system("pause");
	return 0;
}