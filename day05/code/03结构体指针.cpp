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

	//创建学生结构体变量
	struct student s = { "张三",18,100 };
	//通过指针指向结构体变量
	student * p = &s;
	//通过指针访问结构体变量中的数据
	cout << "姓名: " << p->name << " age: " << p->age << " score: " << p->score << endl;
	system("pause");
	return 0;
}