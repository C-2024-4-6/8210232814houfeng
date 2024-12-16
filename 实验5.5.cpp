#include <iostream>
using namespace std;

class Point {
private:
    int x, y;  // 存储坐标点的x和y值

public:
    // 构造函数：初始化x和y为60和80
    Point() {
        x = 60;
        y = 80;
    }

    // 成员函数：修改坐标值为(60 + i, 80 + j)
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    // 成员函数：显示当前坐标值
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // 创建Point对象，初始坐标为(60, 80)
    Point p1;
    cout << "初始坐标是：";
    p1.display();  // 显示初始坐标

    p1.setPoint(30, 10);
    cout << "修改后的坐标是：";
    p1.display();  // 显示修改后的坐标

    return 0;
}

