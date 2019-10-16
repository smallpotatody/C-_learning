#include <iostream>
using namespace std;
#include <string>

//1.创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法 struct 类型名称 {成员列表}
struct Student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};

//2.通过学生类型创建具体学生

//struct Student s1;
//struct Student s2 = {....};
//定义结构体时顺便创建结构体变量
/*struct Student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s;*/
int main()
{
	//struct Student s1;
	//struct关键字可以省略
	struct Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名: " << s1.name << " 年龄: " << s1.age << " 分数: " << s1.score << endl;

	//struct Student s2 = {....};
	struct Student s2 = { "李四",18,94 };
	cout << "姓名: " << s2.name << " 年龄: " << s2.age << " 分数: " << s2.score << endl;
	system("pause");
	return 0;
}