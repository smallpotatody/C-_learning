#include <iostream>
using namespace std;

int main()
{
	//1.创建数组元素逆置
	int arr[5] = {};
	cout << "输入数组元素" << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << "第" << k << "个元素为:";
		cin >> arr[k];
	}
	cout << "转换前的顺序为：";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//2.实现逆置
	int start = 0;//起始元素下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start < end) 
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	//3.打印逆置后的数组
	cout << "转换后的顺序为：";
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}