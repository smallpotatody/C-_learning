#include <iostream>
using namespace std;

int main()
{
	//ָ�������
	//����ָ����������е�Ԫ��

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ�� " << arr[0] << endl;
	int *p = arr;
	cout << "����ָ����ʵ�һ��Ԫ�أ� " << *p << endl;
	p++;
	cout << "����ָ����ʵڶ���Ԫ�أ� " << *p << endl;

	cout << "����ָ���������" << endl;

	int * p2 = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	system("pause");
	return 0;
}