#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char ch;
	cout << "������Ҫ�������������a��b��";
	cin >> a >> b;
	cout << "������Ҫ���е��������ͣ�";
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
		cout << "����Ϊ0" << endl;
	}
		break;
	}
}
