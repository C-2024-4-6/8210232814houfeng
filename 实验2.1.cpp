#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "������һ���ַ���";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
        cout << "ת����Ĵ�д�ַ�Ϊ��" << ch << endl;
    }
    else {
        cout << "���ַ��ĺ���ַ��� ASCII ��ֵΪ��" << static_cast<int>(ch + 1) << endl;
    }

    return 0;
}
