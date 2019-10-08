# C++学习

----------------

# day01

# 1 C++初识

## 1.1 hello world

```C++
#include <iostream>
using namespace std;
int main()
{
    cout << "hello world!" << endl;
    system("pause");
    return 0;
}
```

`system("pause")`是使窗口暂停，不出现闪退。

## 1.2 注释

`//`是单行注释符

`/* */`是多行注释符

## 1.3 变量

变量存在的意义：方便我们管理内存空间

变量创建的语法：`数据类型 变量名=变量初始值;`

变量的作用：给一段指定的内存空间起名，方便操作这段内存

## 1.4 常量

作用：用于记录程序中不可更改的数据

1. **#define**宏常量：`#define 宏常名 常量值`

   通常在文件上方定义，表示一个常量

2. **const**修饰的变量`const 数据类型 常量名=常量值`

   通常在变量定义前加关键字const，修饰该变量为常量，不可修改

## 1.5 关键字

作用：关键字是C++中预先保留的单词（标识符）

**在定义变量或者常量时候，不要用关键字，否则会产生歧义**

## 1.6 标识符命名规则

作用：C++规定给标识符（变量、常量）命名时，有一套自己的规则

- 标识符不能是关键字
- 标识符只能由字母、数字、下划线组成
- 第一个字符必须为字母或下划线
- 标识符中字母区分大小写

# 2 数据结构

数据类型存在的意义：给变量分配合适的内存空间

C++规定在创建一个变量或者常量时，必须要指出相应的数据类型，否则无法给变量分配内存

## 2.1 整形

作用：整型变量表示的是证书类型的数据

| 数据类型            | 占用空间                                            | 取值范围     |
| ------------------- | --------------------------------------------------- | ------------ |
| short(短整型)       | 2字节                                               | -2^15-2^15-1 |
| int(整型)           | 4字节                                               | -2^31-2^31-1 |
| long(长整型)        | Windows为4字节，Linux为4字节（32位），8字节（64位） | -2^31-2^31-1 |
| long long(长长整型) | 8字节                                               | -2^63-2^63-1 |

**区别在于所占内存空间不同**

## 2.2 sizeof关键字

作用：利用sizeof关键字可以统计数据类型所占内存大小

语法：`sizeof(数据类型/变量)`

## 2.3 实型（浮点型）

作用：用于表示小数

分类：

- 单精度`float`
- 双精度`double`

| 数据类型 | 占用空间 | 有效数字范围    |
| -------- | -------- | --------------- |
| float    | 4字节    | 7位有效数字     |
| double   | 8字节    | 15~16位有效数字 |

**科学计数法**

```C++
float f = 3e2;//3*10^2=300
float f1 = 4e-2;//4*10^-2=0.04
```

## 2.4 字符型

作用：字符变量用于显示单个字符

语法：`char ch = 'a';`

**注意：**在显示字符型变量时，用单引号将字符括起来，不要用双引号，单引号内只能有一个字符，不可一世字符串

C/C++中字符型变量只占用**一个字节**，字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元中

## 2.5 转义字符

作用：用于表示一些不能显示出来的ASCII字符

常用的转义字符：

| 转义字符 | 含义                           | ASCII（十进制） |
| -------- | ------------------------------ | --------------- |
| \n       | 换行，将当前位置移到下一行开头 | 010             |
| \t       | 水平制表                       | 009             |
| \\       | 代表一个反斜杠字符“\”          | 092             |

## 2.6 字符串型

作用：用于表示一串字符

两种风格：

- C风格字符串：`char 变量名[] = "字符串值";`
- C++风格字符串：`string 变量名 = "字符串值";`

## 2.7 布尔类型 bool

作用：不二数据类型代表真或假的值

bool类型只有两个值：

- true --真（本质是1）
- false --假（本质是0）

bool类型占1个字节大小

## 2.8 数据输入

作用：用于从键盘获取数据

关键字：`cin`

语法：`cin >> 变量`

代码地址：[https://github.com/smallpotatody/C-_learning/tree/master/code](https://github.com/smallpotatody/C-_learning/tree/master/code)

--------------------------------------------------

# day02

# 3 运算符

作用：用于执行代码的运算

| 运算符类型 | 作用                                   |
| ---------- | -------------------------------------- |
| 算术运算符 | 用于处理四则运算                       |
| 赋值运算符 | 用于将表达式的值赋给变量               |
| 比较运算符 | 用于表达式的比较，并返回一个真值或价值 |
| 逻辑运算符 | 用于根据表达式的值返回真值或假值       |



## 3.1 算术运算符

作用：用于处理四则运算

算术运算符包括以下符号：

| 运算符 | 术语          | 示例     | 结果  |
| ------ | ------------- | -------- | ----- |
| +      | 正号\|加      | +3\|10+5 | 3\|15 |
| -      | 负号\|减      | -3\|10-7 | -3\|3 |
| *      | 乘            | 10*5     | 50    |
| /      | 除            | 10/5     | 2     |
| %      | 取摸（取余）  | 10%3     | 1     |
| ++     | 前置/后置递增 | ++a/a++  | a+1/a |
| --     | 前置/后置递减 | --a/a--  | a-1/a |

两个小数之间是不可以进行取模（取余）运算，只有整形变量可以取模运算

## 3.2 赋值运算符

作用：用于将表达式的值赋给变量

| 运算符 | 术语   | 示例      | 结果     |
| ------ | ------ | --------- | -------- |
| =      | 赋值   | a=2;b=3;  | a=2;b=3; |
| +=     | 加等于 | a=0;a+=2; | a=2;     |
| -=     | 减等于 | a=3;a-=2; | a=1;     |
| *=     | 乘等于 | a=2;a*=4; | a=8;     |
| /=     | 除等于 | a=4;a/=2; | a=2;     |
| %=     | 模等于 | a=3;a%2;  | a=1;     |



## 3.3 比较运算符

作用：用于表达式的比较，并返回一个真值或假值

| 运算符 | 术语     | 示例 | 结果 |
| ------ | -------- | ---- | ---- |
| ==     | 相等于   | 4==3 | 0    |
| !=     | 不等于   | 4!=3 | 1    |
| <      | 小于     | 4<3  | 0    |
| >      | 大于     | 4>3  | 1    |
| <=     | 小于等于 | 4<=3 | 0    |
| >=     | 大于等于 | 4>=3 | 1    |

在使用`cout <<(a==b)<<endl;`时，必须加括号

## 3.4 逻辑运算符

作用：用于根据表达式的值返回真值或假值

| 运算符 | 术语 | 示例     | 结果                                                   |
| ------ | ---- | -------- | ------------------------------------------------------ |
| !      | 非   | !a       | 如果a为假，则a为真；如果a为真，则a为假。               |
| &&     | 与   | a&&b     | 如果a和b都为真，则结果为真，否则为假。                 |
| \|\|   | 或   | a \|\| b | 如果a和b有一个为真，则结果为真，二者都为假，结果为假。 |

# 4 程序流程结构

C/C++支持最基本的三种程序运行结构：顺序结构、选择结构、循环结构

- 顺序结构：程序按顺序执行，不发生跳转
- 选择结构：依据条件是否满足，有选择的执行相应的功能
- 循环结构：依据条件是否满足，循环多次执行某段代码

## 4.1 选择结构

### 4.1.1 if语句

作用：执行满足条件的语句

if语句的三种形式:

- 单行格式if语句

  `if(条件){条件满足执行语句}`

- 多行格式if语句

  `if(条件){条件满足执行的语句}else{条件不满足执行的语句}`

- 多条件的if语句

  `if(条件1){条件1满足执行的语句}else if(条件2){条件2满足执行的语句}...else{都不满足执行的语句}`

**嵌套if语句**：在if语句中，可以嵌套使用if语句，达到更精确的条件判断

### 4.1.2  三目运算符

作用：通过三目运算符实现简单的判断

语法：`表达式1?表达式2:表达式3;`

解释：如果表达式1为真，执行表达式2，并返回表达式2的结果；

如果表达式1为假，执行表达式3，并返回表达式3的结果；

### 4.1.3 switch语句

作用：执行多条分支语句

语法：

```C++
switch(表达式)
{
    case 结果1:执行语句;
        break;
     case 结果2:执行语句;
        break;
     ...
     default:执行语句;
        break;
}
```

if和switch区别？
switch缺点，判断时候只能是整型或者字符型，不可以是一个区间

switch有点，结构清晰，执行效率高

case里如果没有break，那么程序会一直向下执行

## 4.2 循环结构

### 4.2.1 while循环语句

作用：满足循环条件，执行循环语句

语法：`while(循环条件){循环语句}`

解释：只要循环的结果为真，就执行循环语句

在执行循环语句时，程序必须提供跳出循环的出口，否则出现死循环

**while循环练习案例：猜数字**

案列描述：系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并退出游戏。

```C++
#include <iostream>
using namespace std;
#include <ctime>
int main()
{
	//添加随机数种子，作用利用当前系统时间生成随机数，防止每次随机数一样
	srand((unsigned int)time(NULL));

	//1.系统产生随机数
	int num = 0;
	num = rand() % 100 + 1;
	while (1)
	{
		//2.玩家进行猜测
		int val = 0;
		cin >> val;
		//3.判断玩家猜测
		//猜对 退出游戏
		//猜错 提示猜的结果 过大或过小
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜你猜对了" << endl;
			break;//用来退出当前循环
		}
	}
	system("pause");
	return 0;
}
```

![](C:/Users/Administrator/Documents/C++_learning/day02/pictures/14.jpg)

思维导图：![](C:/Users/Administrator/Documents/C++_learning/day02/Mind_Pictures/day02.jpeg)

代码地址：