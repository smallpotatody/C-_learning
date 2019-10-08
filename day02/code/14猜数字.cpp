#include <iostream>
using namespace std;
#include <ctime>
int main()
{
	//添加随机数种子，作用利用当前系统时间生成随机数，防止每次随机数一样
	srand((unsigned int)time(NULL));

	//1.系统产生随机数
	int num = 0;
	num = rand() % 100 + 1;
	while (1)
	{
		//2.玩家进行猜测
		int val = 0;
		cin >> val;
		//3.判断玩家猜测
		//猜对 退出游戏
		//猜错 提示猜的结果 过大或过小
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜你猜对了" << endl;
			break;//用来退出当前循环
		}
	}
	system("pause");
	return 0;
}