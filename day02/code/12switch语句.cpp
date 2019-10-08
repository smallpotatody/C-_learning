#include <iostream>
using namespace std;

int main()
{
	//给电影打分
	//10-9 经典
	//7-8 非常好
	//6-5 一般
	//5以下 
	cout << "请给电影进行打分" << endl;
	int score = 0;
	cin >> score;
	cout << "你打的分数为：" << score << endl;
	switch (score)
	{
	case 10:
		cout << "经典" << endl;
		break;
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
		cout << "非常好" << endl;
		break;
	case 6:
		cout << "一般" << endl;
		break;
	case 5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
	}
	system("pause");
	return 0;
}