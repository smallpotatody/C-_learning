#include <iostream>
using namespace std;

int main()
{
	//����Ӱ���
	//10-9 ����
	//7-8 �ǳ���
	//6-5 һ��
	//5���� 
	cout << "�����Ӱ���д��" << endl;
	int score = 0;
	cin >> score;
	cout << "���ķ���Ϊ��" << score << endl;
	switch (score)
	{
	case 10:
		cout << "����" << endl;
		break;
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
		cout << "�ǳ���" << endl;
		break;
	case 6:
		cout << "һ��" << endl;
		break;
	case 5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
	}
	system("pause");
	return 0;
}