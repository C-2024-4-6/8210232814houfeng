#include <iostream>
using namespace std;

int peach(int day)
{
	if (day==10) return 1;
	if (day<10) return (peach(day+1)+1)*2;
}
int main()
{
	int result = peach(1);
	cout << "��һ��ժ��" << result <<"�����ӡ�";
	return 0;
}
