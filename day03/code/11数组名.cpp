#include <iostream>
using namespace std;

int main()
{
	int arr[8] = { 2,5,4,4,4,2,9,6 };
	cout << "��������ռ���ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ�� " << sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ�����" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "�����׵�ַΪ�� " << arr << endl;
	cout << "�����׵�ַΪ��ʮ���ƣ���" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ�� " << &arr[1] << endl;
	cout << "�����е�һ��Ԫ�ص�ַ��ʮ���ƣ�Ϊ�� " << (int)&arr[1] << endl;
	cout << "�����еڶ���Ԫ�ص�ַ��ʮ���ƣ�Ϊ�� " << (int)&arr[2] << endl;
	system("pause");
	return 0;
}