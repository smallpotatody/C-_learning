#include <iostream>
using namespace std;

int main()
{
	int arr[8] = { 2,5,4,4,4,2,9,6 };
	cout << "整个数组占用内存空间为： " << sizeof(arr) << endl;
	cout << "每个元素占用内存空间为： " << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "数组首地址为： " << arr << endl;
	cout << "数组首地址为（十进制）：" << (int)arr << endl;
	cout << "数组中第一个元素地址为： " << &arr[1] << endl;
	cout << "数组中第一个元素地址（十进制）为： " << (int)&arr[1] << endl;
	cout << "数组中第二个元素地址（十进制）为： " << (int)&arr[2] << endl;
	system("pause");
	return 0;
}