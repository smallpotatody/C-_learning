#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudents(const student *s)
{
	//s->age = 40;//����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���������
	cout << "name: " << s->name
		<< " age: " << s->age
		<< " score: " << s->score << endl;
}
int main()
{
	student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	printStudents(&s);
	cout << "name: " << s.name
		<< " age: " << s.age
		<< " score: " << s.score << endl;
	system("pause");
	return 0;
}