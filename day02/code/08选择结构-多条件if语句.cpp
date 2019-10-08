#include <iostream>
using namespace std;

int main()
{
	int score;
	
	cout << "请输入你的分数：";
	cin >> score;
	if (score >= 600)
	{	
		cout << "好" << endl;
	}
	else if (score >= 500)
	{
		cout << "还不错" << endl;
	}
	else
	{
		cout << "失败者" << endl;
	}
	system("pause");
	return 0;
}