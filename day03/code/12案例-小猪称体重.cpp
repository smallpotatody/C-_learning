#include <iostream>
using namespace std;

int main()
{
	cout << "��������ֻС�����أ�" << endl;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "��" << i+1 <<"ֻ�������Ϊ";
		cin >> arr[i];
	}
	int max = 0;
	int j = 0;
	int t = 0;
	for (j = 0; j < 5; j++)
	{
		
		if (arr[j] >= max)
		{
			max = arr[j];
			t = j + 1;
		}
	
	}
	cout << "���ֵ����Ϊ"<< max << endl;
	cout << "��" << t << "ֻ������" << endl;
	system("pause");
	return 0;
}