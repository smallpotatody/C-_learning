#include <iostream>
using namespace std;
#include <string>

//�ṹ������
//1.����ṹ��
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};


int main()
{
	//2.�����ṹ������͸�ֵ
	struct Student stuArry[3] = 
	{
		{"����",18,100},
		{"����",28,80},
		{"����",20,89}
	};
	//3.���ṹ�������е�Ԫ�ظ�ֵ
	stuArry[2].name = "����";
	stuArry[2].age = 19;
	stuArry[2].score = 88;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "name: " << stuArry[i].name << " age: " << stuArry[i].age << " score: " << stuArry[i].score << endl;
	}
	system("pause");
	return 0;
}