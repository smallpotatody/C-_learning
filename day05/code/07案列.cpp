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
	//姓名
	string tName;
	//学生数组
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
	//随机种子
	srand((unsigned int)time(NULL));

	//1.创建3名老师的数组
	Teacher tArray[3];

	//2.通过函数给3名老师的信息赋值，并给老师带来学生的信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3.打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}