#include <iostream>
using namespace std;

bool yorn(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool a_a(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}

int main() {
    double a, b, c;

    cout << "�����������ε������ߣ�" << endl;
    cin >> a >> b >> c;

    if (yorn(a, b, c)) {
        double perimeter = a + b + c;
        cout << "�����ε��ܳ�Ϊ��" << perimeter << endl;

        if (a_a(a, b, c)) {
            cout << "���������ǵ���������" << endl;
        }
        else {
            cout << "�������β��ǵ���������" << endl;
        }
    }
    else {
        cout << "����������߲��ܹ���������" << endl;
    }

    return 0;
}
