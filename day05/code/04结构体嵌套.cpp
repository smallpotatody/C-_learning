#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};
int main()
{
	teacher t;
	t.id = 1000;
	t.name = "nice";
	t.age = 30;
	t.stu.name = "tom";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << "teacher's name: " << t.name
		<< " teacher's id: " << t.id
		<< " teacher's age: " << t.age
		<< " ��ʦ������ѧ���������� " << t.stu.name
		<< " ѧ�����䣺 " << t.stu.age
		<< " ѧ���ķ���" << t.stu.score << endl;
	system("pause");
	return 0;
}