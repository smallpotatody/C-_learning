#include <iostream>
using namespace std;

int main()
{
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	default:
		break;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}