#include <iostream>
using namespace std;
#include <ctime>
int main()
{
	//�����������ӣ��������õ�ǰϵͳʱ���������������ֹÿ�������һ��
	srand((unsigned int)time(NULL));

	//1.ϵͳ���������
	int num = 0;
	num = rand() % 100 + 1;
	while (1)
	{
		//2.��ҽ��в²�
		int val = 0;
		cin >> val;
		//3.�ж���Ҳ²�
		//�¶� �˳���Ϸ
		//�´� ��ʾ�µĽ�� ������С
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ��¶���" << endl;
			break;//�����˳���ǰѭ��
		}
	}
	system("pause");
	return 0;
}