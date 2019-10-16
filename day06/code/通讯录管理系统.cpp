#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别 1 男 2 女
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};

//设计通讯录结构体
struct Addressboks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size;
};

//1.封装函数显示该界面
void showMenu()
{
	cout << "******************************" << endl;
	cout << "******************************" << endl;
	cout << "******\t1.添加联系人\t******" << endl;
	cout << "******\t2.显示联系人\t******" << endl;
	cout << "******\t3.删除联系人\t******" << endl;
	cout << "******\t4.查找联系人\t******" << endl;
	cout << "******\t5.修改联系人\t******" << endl;
	cout << "******\t6.清空联系人\t******" << endl;
	cout << "******\t0.退出通讯录\t******" << endl;
	cout << "******************************" << endl;
	cout << "******************************" << endl;
}

//2.添加联系人
void addPerson(Addressboks * abs)
{
	//判断通讯录是否已满，如果满了就不要再添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加联系人
		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入性别： " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		int age = 0;
		cout << "请输入年龄： " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		string phone;
		cout << "请输入联系电话： " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		string address;
		cout << "请输入家庭住址： " << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		abs->m_Size++;
		cout << "添加成功" << endl;
		//请按任意键继续
		system("pause");
		//清屏
		system("cls");
	}
}

//3.显示联系人
void showPerson(Addressboks * abs)
{
	//判断通信录中人数是否为0，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名： " << abs->personArray[i].m_Name << "\t";
			cout << "性别： " << (abs->personArray[i].m_Sex == 1 ?"男" : "女" )<< "\t";
			cout << "年龄： " << abs->personArray[i].m_Age << "\t";
			cout << "电话： " << abs->personArray[i].m_Phone << "\t";
			cout << "地址： " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//4.检测联系人是否存在
int isExist(Addressboks * abs,string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//5.删除指定联系人
void deletePerson(Addressboks * abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}

		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}

//6.查找指定的联系人信息
void findPerson(Addressboks * abs)
{
	cout << "请输入您要查找的联系人： " << endl;
	string name;
	cin >> name;
	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名： " << abs->personArray[ret].m_Name << "\t";
		cout << "性别： " << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄： " << abs->personArray[ret].m_Age << "\t";
		cout << "电话： " << abs->personArray[ret].m_Phone << "\t";
		cout << "地址： " << abs->personArray[ret].m_Addr << endl;
	}
	system("pause");
	system("cls");
}

//7.修改指定联系人信息
void modifyPerson(Addressboks * abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		int sex = 0;
		cout << "请输入您的性别： " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		int age = 0;
		cout << "请输入您的年龄： " << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//电话
		cout << "请输入联系电话： " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//住址
		cout << "请输入家庭住址： " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功" << endl;
	}
	system("pause");
	system("cls");
}

//8.清空所有联系人
void cleanPerson(Addressboks * abs)
{
	cout << "您的通讯录是否清空？(Y/N)" << endl;
	string select;
	cin >> select;
	while (true)
	{
		if (select == "Y" || select == "y")
		{
			//将当前记录联系人数量置为0，做逻辑清空操作
			abs->m_Size = 0;
			cout << "通讯录已清空" << endl;
			break;
		}
		else if (select == "N" || select == "n")
		{
			break;
		}
		else
		{
			cout << "输入有误" << endl;
			break;
		}
	}
	
	system("pause");
	system("cls");
}


int main()
{
	//创建通讯录结构体变量
	Addressboks abs;
	//初始化通讯录中人数为0个
	abs.m_Size = 0;
	//创建用户选择输入的变量
	int select = 0;

	
	while (true)
	{
		//菜单调用
		showMenu();
		cout << "请输入你的选择： " << endl;
		cin >> select;
		switch (select)
		{
			//1.添加联系人
		case 1:
			//利用地址传递，可以修饰实参
			addPerson(&abs);
			break;
			//2.显示联系人
		case 2:
			showPerson(&abs);
			break;
			//3.删除联系人
		case 3:
		/*{
			cout << "请输入删除联系人姓名： " << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "找到此人" << endl;
			}
			system("pause");
			system("cls");
		}*/
			deletePerson(&abs);
			break;
			//4.查找联系人
		case 4:
			findPerson(&abs);
			break;
			//修改联系人
		case 5:
			modifyPerson(&abs);
			break;
			//清空联系人
		case 6:
			cleanPerson(&abs);
			break;
			//退出通讯录
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
	return 0;
}