#include <iostream>
using namespace std;
#include <string>

//1.����ѧ���������ͣ�ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨ struct �������� {��Ա�б�}
struct Student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int score;
};

//2.ͨ��ѧ�����ʹ�������ѧ��

//struct Student s1;
//struct Student s2 = {....};
//����ṹ��ʱ˳�㴴���ṹ�����
/*struct Student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int score;
}s;*/
int main()
{
	//struct Student s1;
	//struct�ؼ��ֿ���ʡ��
	struct Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "����: " << s1.name << " ����: " << s1.age << " ����: " << s1.score << endl;

	//struct Student s2 = {....};
	struct Student s2 = { "����",18,94 };
	cout << "����: " << s2.name << " ����: " << s2.age << " ����: " << s2.score << endl;
	system("pause");
	return 0;
}