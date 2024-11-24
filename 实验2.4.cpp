#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char ch;
	cout << "请输入要计算的两个数字a、b：";
	cin >> a >> b;
	cout << "请输入要进行的运算类型：";
	cin >> ch;
	switch (ch)
	{
	case '+': cout << "a+b=" << a + b << endl;
		break;
	case '-': cout << "a-b=" << a - b << endl;
		break;
	case '*': cout << "a*b=" << a * b << endl;
		break;
	case '%': cout << "a%b=" << a % b << endl;
		break;
	case '/': 
		if (b != 0)
	{
		cout << "a/b=" << a / b << endl;
	}
			else
	{
		cout << "除数为0" << endl;
	}
		break;
	}
}
