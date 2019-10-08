#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	
	cout << "请输入你的分数：";
	cin >> score;
	if (score > 700)
	{
		cout << "You are good" << endl;
	}

	system("pause");
	return 0;
}