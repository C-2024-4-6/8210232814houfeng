//student.h                (这是头文件，在此文件中进行类的声明)
#include <iostream>
using namespace std;

class Student {
public:
    Student();  
    Student(int num, const std::string& name, char sex); 
    void display();  // 显示学生信息
    void set_value(int num, const std::string& name, char sex);  // 设置学生信息

private:
    int num;
    std::string name;  
    char sex;
};

