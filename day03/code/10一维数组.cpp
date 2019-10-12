#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	cout << endl;

	int arr1[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << endl;
	}
	cout << endl;

	int arr2[] = {20,15,12,14,16,58};
	for (int i = 0; i < 6; i++)
	{
		cout << arr2[i] << endl;
	}
	system("pause");
	return 0;
}