#include <iostream>
using namespace std;

int main()
{
	int score;
	
	cout << "��������ķ�����";
	cin >> score;
	if (score >= 600)
	{	
		cout << "��" << endl;
	}
	else if (score >= 500)
	{
		cout << "������" << endl;
	}
	else
	{
		cout << "ʧ����" << endl;
	}
	system("pause");
	return 0;
}