#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	//����ָ��
	int * p;
	p = &a;
	cout << "a�ĵ�ַΪ�� " << &a << endl;
	cout << "ָ��pΪ�� " << p << endl;

	//ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
	
	*p = 100;
	cout << "*p= " << *p << endl;
	cout << "a= " << a << endl;
	system("pause");
	return 0;
}