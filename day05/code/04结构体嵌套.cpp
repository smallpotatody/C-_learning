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
		<< " 老师辅导的学生的姓名： " << t.stu.name
		<< " 学生年龄： " << t.stu.age
		<< " 学生的分数" << t.stu.score << endl;
	system("pause");
	return 0;
}