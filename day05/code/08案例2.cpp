#include <iostream>
using namespace std;
#include <string>

//1.���Ӣ�۽ṹ��
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};

//ð������
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << heroArray[i].name << " ���䣺 " << heroArray[i].age << " �Ա� " << heroArray[i].sex << endl;
	}
}

int main()
{
	

	//2.����������5��Ӣ��
	struct Hero heroArray[5] =
	{
		{ "����",23,"��" },
		{ "����",22,"��" },
		{ "�ŷ�",20,"��" },
		{ "����",21,"��" },
		{ "����",19,"Ů" },
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ��ӡ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << heroArray[i].name << " ���䣺 " << heroArray[i].age << " �Ա� " << heroArray[i].sex << endl;
	}
	cout << endl;
	//3.������������򣬰������������������
	bubbleSort(heroArray, len);
	//�������Ľ����ӡ���
	cout << "������ӡ��" << endl;
	printHero(heroArray, len);
	system("pause");
	return 0;
}