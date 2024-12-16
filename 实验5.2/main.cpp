//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;

int main() {
    Student stud;

    stud.set_value(1, "小明", 'M');

    stud.display();

    Student stud1(2, "小红", 'F');
    
    stud1.display();

}

