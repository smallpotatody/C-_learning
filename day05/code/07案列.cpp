#include <iostream>
using namespace std;
#include <string>
#include <ctime>

struct Student 
{
	string sName;
	int score;
};

struct Teacher
{
	//����
	string tName;
	//ѧ������
	struct Student sArray[5];
};


void allocateSpace(struct Teacher tArray[], int len)
{
	string name = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "t_";
		tArray[i].tName += name[i];
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "s_";
			tArray[i].sArray[j].sName += name[j];
			int random = rand() % 51 + 50;
			tArray[i].sArray[j].score = random;
		}
	}
}

void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Teacher's name: " << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tTeacher of Student's name: " << tArray[i].sArray[j].sName << "\tTeacher of Student's score: " << tArray[i].sArray[j].score << endl;
		}
	}
	
}

int main()
{
	//�������
	srand((unsigned int)time(NULL));

	//1.����3����ʦ������
	Teacher tArray[3];

	//2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ������Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3.��ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");
	return 0;
}