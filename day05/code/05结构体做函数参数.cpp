#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

//ֵ����
void printStudent1(struct student s)
{
	s.age = 30;
	cout << "�Ӻ����������� " << s.name << " age: " << s.age << " score: " << s.score << endl;
}

//��ַ����
void printStudent2(struct student * p)
{
	p->age = 50;
	cout << "�Ӻ���2�������� " << p->name << " age: " << p->age << " score: " << p->score << endl;
}
int main()
{
	student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	printStudent2(&s);
	cout << "�������������� " << s.name << " age: " << s.age << " score: " << s.score << endl;
	system("pause");
	return 0;
}