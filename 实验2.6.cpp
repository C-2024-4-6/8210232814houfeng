#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入两个正整数a,b：";
	cin >> a >> b;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	for (int i = b; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "最大公因数为：" << i << endl;
			break;
		}
	}
	for (int j = a; j > 0; j++)
	{
		if (j % a == 0 && j % b == 0)
		{
			cout << "最小公倍数为：" << j << endl;
			break;
		}
	}
	return 0;
}
