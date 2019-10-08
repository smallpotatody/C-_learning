#include <iostream>
using namespace std;

int main()
{
	int score;
	cout << "输入高考分数" << endl;
	cin >> score;
	cout << "高考分数为：" << endl;
	if (score > 600)
	{
		cout << "一本" << endl;
		if (score > 650)
		{
			cout << "北大\n";
		}
		else
		{
			cout << "清华" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "二本" << endl;
	}
	else
	{
		cout << "专科" << endl;
	}
	system("pause");
	return 0;
}