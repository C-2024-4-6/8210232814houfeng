#include<iostream>
using namespace std;
int main()
{
	double a = 1, b = (a + 1) / 2;
	cout << "������һ����a��";
	cin >> a;
	if (a < 0)
	{
		a = -a;
	}
	double x = 0;
	while (b - x > 1e-5 || b - x < -1e-5)
	{
		x = (b + a / b) / 2;
		double c;
		c = x;
		x = b;
		b = c;
	}
	cout << "a��ƽ����Ϊ��" << x << endl;
	return 0; 
}
