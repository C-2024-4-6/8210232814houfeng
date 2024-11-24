#include<iostream>
using namespace std;
int main()
{
	char c;
	int l, s, n, o;
	l = s = n = o = 0;
	cout << "请输入一行字符：";
	while ((c = getchar()) != '\n')
	{
		if (isalpha(c))l++;
		else if (isdigit(c))n++;
		else if (isspace(c))s++;
		else o++;
	}asdsa 
	cout << "字母有" << l-1 << "个，空格有" << s << "个，数字有" << n << "个，其它字符有" << o-1 << "个。" << endl;
}
