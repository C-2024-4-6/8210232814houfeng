#include<iostream>
using namespace std;
int main()
{
	char c;
	int l, s, n, o;
	l = s = n = o = 0;
	cout << "������һ���ַ���";
	while ((c = getchar()) != '\n')
	{
		if (isalpha(c))l++;
		else if (isdigit(c))n++;
		else if (isspace(c))s++;
		else o++;
	}asdsa 
	cout << "��ĸ��" << l-1 << "�����ո���" << s << "����������" << n << "���������ַ���" << o-1 << "����" << endl;
}
