#include <iostream>
using namespace std;

int main()
{
	cout << "请选择副本难度" << endl;
	cout << "1、普通" << endl;
	cout << "2、中等" << endl;
	cout << "3、困难" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "你选择的是普通难度" << endl;
		break;
	case 2:
		cout << "你选择的是中等难度" << endl;
		break;
	case 3:
		cout << "你选择的是困难难度" << endl;
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