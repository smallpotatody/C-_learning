# 8. 结构体

## 8.1 结构体基本概念

结构体属于用户自定义的数据类型，允许用户存储不同的数据类型

## 8.2 结构体定义和使用

语法：`struct 结构体名{结构体成员列表};`

- struct 结构体名 变量名
- struct 结构体名 变量名 = {成员1值, 成员2值...}
- 定义结构体时顺便创建变量

定义结构体时关键字是struct，不可省略

创建结构体变量时，关键字struct可以省略

结构体变量利用操作符 "."访问成员

## 8.3 结构体数组

作用：将自定义的结构体放入到数组中方便维护

语法: `struct 结构体名 数组名[元素个数] = { {}, {}...{} }`

## 8.4 结构体指针

作用：通过指针访问结构体中的成员

利用操作符`->`可以通过结构体指针访问结构体属性

## 8.5 结构体嵌套结构体

作用：结构体的成员可以是另一个结构体

## 8.6 结构体做函数参数

作用：将结构体作为参数向函数中传递

传递方式：

- 值传递
- 地址传递

如果不想修改主函数中的数据，用值传递，反之用地址传递

## 8.7 结构体中const使用场景

作用：用const来防止误操作

## 8.8 结构体案例

### 8.8.1 案例1

案例描述：学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下：

设计学生和老师的结构体，其中在老师的结构体中，有老师名和一个存放5名学生的数组作为成员。学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值，最终打印出老师数据以及老师所带的学生数据。

```C++
#include <iostream>
using namespace std;
#include <string>
#include <ctime>

struct Student 
{
	string sName;
	int score;
};

struct Teacher
{
	//姓名
	string tName;
	//学生数组
	struct Student sArray[5];
};


void allocateSpace(struct Teacher tArray[], int len)
{
	string name = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "t_";
		tArray[i].tName += name[i];
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "s_";
			tArray[i].sArray[j].sName += name[j];
			int random = rand() % 51 + 50;
			tArray[i].sArray[j].score = random;
		}
	}
}

void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Teacher's name: " << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tTeacher of Student's name: " << tArray[i].sArray[j].sName << "\tTeacher of Student's score: " << tArray[i].sArray[j].score << endl;
		}
	}
	
}

int main()
{
	//随机种子
	srand((unsigned int)time(NULL));

	//1.创建3名老师的数组
	Teacher tArray[3];

	//2.通过函数给3名老师的信息赋值，并给老师带来学生的信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3.打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}
```

结果：

![](.\pictures\6.jpg)

### 8.8.2 案例2

案例描述：

设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄。通过冒牌排序，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果

五名英雄信息如下：

```C++
{ "刘备",23,"男" },
{ "关羽",22,"男" },
{ "张飞",20,"男" },
{ "赵云",21,"男" },
{ "貂蝉",19,"女" },
```

```C++
#include <iostream>
using namespace std;
#include <string>

//1.设计英雄结构体
struct Hero
{
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string sex;
};

//冒泡排序法
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名： " << heroArray[i].name << " 年龄： " << heroArray[i].age << " 性别： " << heroArray[i].sex << endl;
	}
}

int main()
{
	

	//2.创建数组存放5名英雄
	struct Hero heroArray[5] =
	{
		{ "刘备",23,"男" },
		{ "关羽",22,"男" },
		{ "张飞",20,"男" },
		{ "赵云",21,"男" },
		{ "貂蝉",19,"女" },
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前打印：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "姓名： " << heroArray[i].name << " 年龄： " << heroArray[i].age << " 性别： " << heroArray[i].sex << endl;
	}
	cout << endl;
	//3.对数组进行排序，按照年龄进行升序排序
	bubbleSort(heroArray, len);
	//将排序后的结果打印输出
	cout << "排序后打印：" << endl;
	printHero(heroArray, len);
	system("pause");
	return 0;
}
```

测试结果:![](.\pictures\7.jpg)

