#include <iostream>
using namespace std;
#include <string>

int main()
{
	//����
	int a = 0;
	cout << "������ͱ���a��ֵ��" ;
	cin >> a;
	cout << a << endl;

	//������
	float b = 1.1f;
	cout << "��������ͱ���b��ֵ��" ;
	cin >> b;
	cout << b << endl;

	//�ַ���
	char ch = 'a';
	cout << "����ַ��ͱ���ch��ֵ��" ;
	cin >> ch;
	cout << ch << endl;

	//�ַ�����
	string str = "";
	cout << "����ַ����ͱ���str��ֵ��" ;
	cin >> str;
	cout << str << endl;
	
	//bool��
	bool flag = false;
	cout << "���bool�ͱ���flag��ֵ��" << endl;
	cin >> flag;
	cout << flag << endl;
	system("pause");
	return 0;
}