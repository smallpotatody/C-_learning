#include <iostream>
using namespace std;
#include <string>

//结构体数组
//1.定义结构体
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};


int main()
{
	//2.创建结构体数组和赋值
	struct Student stuArry[3] = 
	{
		{"张三",18,100},
		{"李四",28,80},
		{"王五",20,89}
	};
	//3.给结构体数组中的元素赋值
	stuArry[2].name = "赵六";
	stuArry[2].age = 19;
	stuArry[2].score = 88;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "name: " << stuArry[i].name << " age: " << stuArry[i].age << " score: " << stuArry[i].score << endl;
	}
	system("pause");
	return 0;
}