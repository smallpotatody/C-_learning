#include <iostream>
using namespace std;
#define month 12
int main()
{
	//�������巽ʽ��
	//1.#define �곣��
	//2.const���εĳ���
	//month = 13;//����month�ǳ�����һ���޸ľͱ���
	cout << "һ�깲�У�" << month << "��" << endl;
	const int day = 7;
	//day = 10;//����const���εı���Ҳ��Ϊ����
	cout << "һ�ܹ���" << day << "��" << endl;
	system("pause");
	return 0;
}