#include <iostream>
using namespace std;
int main() {
    cout << "input 华氏温度";
	float h,s;
	cin >> h;
	s = (h-32) /1.8;
	cout << "摄氏温度为：" << s ;
    return 0;
}
