#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

int main()
{

	//����ѧ���ṹ�����
	struct student s = { "����",18,100 };
	//ͨ��ָ��ָ��ṹ�����
	student * p = &s;
	//ͨ��ָ����ʽṹ������е�����
	cout << "����: " << p->name << " age: " << p->age << " score: " << p->score << endl;
	system("pause");
	return 0;
}