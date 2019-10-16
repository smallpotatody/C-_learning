#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա� 1 �� 2 Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};

//���ͨѶ¼�ṹ��
struct Addressboks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1.��װ������ʾ�ý���
void showMenu()
{
	cout << "******************************" << endl;
	cout << "******************************" << endl;
	cout << "******\t1.�����ϵ��\t******" << endl;
	cout << "******\t2.��ʾ��ϵ��\t******" << endl;
	cout << "******\t3.ɾ����ϵ��\t******" << endl;
	cout << "******\t4.������ϵ��\t******" << endl;
	cout << "******\t5.�޸���ϵ��\t******" << endl;
	cout << "******\t6.�����ϵ��\t******" << endl;
	cout << "******\t0.�˳�ͨѶ¼\t******" << endl;
	cout << "******************************" << endl;
	cout << "******************************" << endl;
}

//2.�����ϵ��
void addPerson(Addressboks * abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ�Ҫ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//�����ϵ��
		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		int age = 0;
		cout << "���������䣺 " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		string phone;
		cout << "��������ϵ�绰�� " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		string address;
		cout << "�������ͥסַ�� " << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		//�밴���������
		system("pause");
		//����
		system("cls");
	}
}

//3.��ʾ��ϵ��
void showPerson(Addressboks * abs)
{
	//�ж�ͨ��¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������ " << abs->personArray[i].m_Name << "\t";
			cout << "�Ա� " << (abs->personArray[i].m_Sex == 1 ?"��" : "Ů" )<< "\t";
			cout << "���䣺 " << abs->personArray[i].m_Age << "\t";
			cout << "�绰�� " << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ�� " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//4.�����ϵ���Ƿ����
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

//5.ɾ��ָ����ϵ��
void deletePerson(Addressboks * abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}

		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//6.����ָ������ϵ����Ϣ
void findPerson(Addressboks * abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ� " << endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������ " << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա� " << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺 " << abs->personArray[ret].m_Age << "\t";
		cout << "�绰�� " << abs->personArray[ret].m_Phone << "\t";
		cout << "��ַ�� " << abs->personArray[ret].m_Addr << endl;
	}
	system("pause");
	system("cls");
}

//7.�޸�ָ����ϵ����Ϣ
void modifyPerson(Addressboks * abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		int sex = 0;
		cout << "�����������Ա� " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		int age = 0;
		cout << "�������������䣺 " << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//�绰
		cout << "��������ϵ�绰�� " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ�� " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//8.���������ϵ��
void cleanPerson(Addressboks * abs)
{
	cout << "����ͨѶ¼�Ƿ���գ�(Y/N)" << endl;
	string select;
	cin >> select;
	while (true)
	{
		if (select == "Y" || select == "y")
		{
			//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
			abs->m_Size = 0;
			cout << "ͨѶ¼�����" << endl;
			break;
		}
		else if (select == "N" || select == "n")
		{
			break;
		}
		else
		{
			cout << "��������" << endl;
			break;
		}
	}
	
	system("pause");
	system("cls");
}


int main()
{
	//����ͨѶ¼�ṹ�����
	Addressboks abs;
	//��ʼ��ͨѶ¼������Ϊ0��
	abs.m_Size = 0;
	//�����û�ѡ������ı���
	int select = 0;

	
	while (true)
	{
		//�˵�����
		showMenu();
		cout << "���������ѡ�� " << endl;
		cin >> select;
		switch (select)
		{
			//1.�����ϵ��
		case 1:
			//���õ�ַ���ݣ���������ʵ��
			addPerson(&abs);
			break;
			//2.��ʾ��ϵ��
		case 2:
			showPerson(&abs);
			break;
			//3.ɾ����ϵ��
		case 3:
		/*{
			cout << "������ɾ����ϵ�������� " << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ�����" << endl;
			}
			system("pause");
			system("cls");
		}*/
			deletePerson(&abs);
			break;
			//4.������ϵ��
		case 4:
			findPerson(&abs);
			break;
			//�޸���ϵ��
		case 5:
			modifyPerson(&abs);
			break;
			//�����ϵ��
		case 6:
			cleanPerson(&abs);
			break;
			//�˳�ͨѶ¼
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
	return 0;
}