//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过
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

