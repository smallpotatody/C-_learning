#include <iostream>
using namespace std;
//����������ʽ
//1���޲��޷�
void test01()
{
	cout << "This is a test01" << endl;
}
//2���в��޷�
void test02(int a)
{
	cout << "This is test02 a = " << a << endl;
}
//3.�޲��з�
int test03()
{
	cout << "This is test03 ";
	return 100;
}
//4.�в��з�
int test04(int a)
{
	cout << "This is test04 a= " << a << endl;
	return a;
}
int main()
{
	//�޲��޷���������
	test01();

	//�в��޷���������
	test02(35);

	//�޲��з���������
	int c = test03();
	cout << "c= " << c << endl;

	//�в��з���������
	int num2 = test04(10000);
	cout << "num2= " << num2 << endl;

	system("pause");
	return 0;
}