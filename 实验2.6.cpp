#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "����������������a,b��";
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
			cout << "�������Ϊ��" << i << endl;
			break;
		}
	}
	for (int j = a; j > 0; j++)
	{
		if (j % a == 0 && j % b == 0)
		{
			cout << "��С������Ϊ��" << j << endl;
			break;
		}
	}
	return 0;
}
