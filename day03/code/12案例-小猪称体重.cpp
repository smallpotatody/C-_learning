#include <iostream>
using namespace std;

int main()
{
	cout << "请输入五只小猪体重：" << endl;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "第" << i+1 <<"只猪的体重为";
		cin >> arr[i];
	}
	int max = 0;
	int j = 0;
	int t = 0;
	for (j = 0; j < 5; j++)
	{
		
		if (arr[j] >= max)
		{
			max = arr[j];
			t = j + 1;
		}
	
	}
	cout << "最大值体重为"<< max << endl;
	cout << "第" << t << "只猪最重" << endl;
	system("pause");
	return 0;
}