#include <iostream>
using namespace std;

int main()
{
	/*单精度
	双精度
	*/
	//默认情况下，输出一个小数，会显示出6位有效数字
	float f1 = 5.24f;
	cout << "f1=" << f1 << endl;

	double f2 = 4.53;
	cout << "f2=" << f2 << endl;
	cout << "float所占空间大小为：" << sizeof(float) << endl;
	cout << "double所占空间为：" << sizeof(double) << endl;
	system("pause");
	return 0;
}