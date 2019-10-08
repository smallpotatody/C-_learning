#include <iostream>
using namespace std;

int main()
{
	//创建bool数据类型
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;
	//查看bool类型所占内存空间
	cout << "size of bool=" << sizeof(bool) << endl;
	system("pause");
	return 0;
}