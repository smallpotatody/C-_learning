#include <iostream>
using namespace std;

int main()
{
	int score;
	cout << "����߿�����" << endl;
	cin >> score;
	cout << "�߿�����Ϊ��" << endl;
	if (score > 600)
	{
		cout << "һ��" << endl;
		if (score > 650)
		{
			cout << "����\n";
		}
		else
		{
			cout << "�廪" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "ר��" << endl;
	}
	system("pause");
	return 0;
}