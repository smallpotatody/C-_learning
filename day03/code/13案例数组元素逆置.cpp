#include <iostream>
using namespace std;

int main()
{
	//1.��������Ԫ������
	int arr[5] = {};
	cout << "��������Ԫ��" << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << "��" << k << "��Ԫ��Ϊ:";
		cin >> arr[k];
	}
	cout << "ת��ǰ��˳��Ϊ��";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//2.ʵ������
	int start = 0;//��ʼԪ���±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start < end) 
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	//3.��ӡ���ú������
	cout << "ת�����˳��Ϊ��";
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}