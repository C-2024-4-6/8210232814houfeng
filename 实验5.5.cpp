#include <iostream>
using namespace std;

class Point {
private:
    int x, y;  // �洢������x��yֵ

public:
    // ���캯������ʼ��x��yΪ60��80
    Point() {
        x = 60;
        y = 80;
    }

    // ��Ա�������޸�����ֵΪ(60 + i, 80 + j)
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    // ��Ա��������ʾ��ǰ����ֵ
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // ����Point���󣬳�ʼ����Ϊ(60, 80)
    Point p1;
    cout << "��ʼ�����ǣ�";
    p1.display();  // ��ʾ��ʼ����

    p1.setPoint(30, 10);
    cout << "�޸ĺ�������ǣ�";
    p1.display();  // ��ʾ�޸ĺ������

    return 0;
}

