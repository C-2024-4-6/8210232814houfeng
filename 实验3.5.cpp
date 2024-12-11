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
	cout << "第一天摘了" << result <<"个桃子。";
	return 0;
}
