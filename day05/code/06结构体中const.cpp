#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudents(const student *s)
{
	//s->age = 40;//加入const之后，一旦有修改的操作就会报错，可以防止我们误操作
	cout << "name: " << s->name
		<< " age: " << s->age
		<< " score: " << s->score << endl;
}
int main()
{
	student s;
	s.name = "李四";
	s.age = 20;
	s.score = 85;
	printStudents(&s);
	cout << "name: " << s.name
		<< " age: " << s.age
		<< " score: " << s.score << endl;
	system("pause");
	return 0;
}