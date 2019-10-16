#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

//值传递
void printStudent1(struct student s)
{
	s.age = 30;
	cout << "子函数中姓名： " << s.name << " age: " << s.age << " score: " << s.score << endl;
}

//地址传递
void printStudent2(struct student * p)
{
	p->age = 50;
	cout << "子函数2中姓名： " << p->name << " age: " << p->age << " score: " << p->score << endl;
}
int main()
{
	student s;
	s.name = "李四";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	printStudent2(&s);
	cout << "主函数中姓名： " << s.name << " age: " << s.age << " score: " << s.score << endl;
	system("pause");
	return 0;
}