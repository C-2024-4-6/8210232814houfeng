//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
using namespace std;

int main() {
    Student stud;

    stud.set_value(1, "С��", 'M');

    stud.display();

    Student stud1(2, "С��", 'F');
    
    stud1.display();

}

