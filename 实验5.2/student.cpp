//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include "student.h"            //��Ҫ©д���У��������ͨ����
using namespace std;

Student::Student() {
    num = 0;
    name = "Unknown";  
    sex = 'U';
}


Student::Student(int num, const std::string& name, char sex) {
    this->num = num;
    this->name = name;  
    this->sex = sex;
}


void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}


void Student::set_value(int num, const std::string& name, char sex) {
    this->num = num;
    this->name = name; 
    this->sex = sex;
}

