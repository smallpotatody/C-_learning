#include <iostream>
using namespace std;

int main()
{
	//�����ַ��ͱ���
	char ch = 'a';
	char ch1 = 'A';
	char ch2 = 'B';
	cout << ch << endl;
	//�ַ��ͱ�����ռ�ڴ��С
	cout << "�ַ��ͱ�����ռ�ڴ��СΪ��" << sizeof(char) << "bytes" << endl;
	//�ַ��ͱ�����������
	//char ch2 = "b";//�����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch2 = 'abcd';//�����ַ��ͱ���ʱ����������ֻ����һ���ַ�
	//�ַ��ͱ�����ӦASXCII����
	//a-97;A-65;
	cout << "a��ASCIIֵΪ��"<<(int)ch << endl;
	cout << "A��ASCIIֵΪ��" << (int)ch1 << endl;
	cout << "B��ASCIIֵΪ��" << (int)ch2 << endl;
	system("pause");
	return 0;
}