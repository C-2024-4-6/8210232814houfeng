//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
#include <iostream>
using namespace std;

class Student {
public:
    Student();  
    Student(int num, const std::string& name, char sex); 
    void display();  // ��ʾѧ����Ϣ
    void set_value(int num, const std::string& name, char sex);  // ����ѧ����Ϣ

private:
    int num;
    std::string name;  
    char sex;
};

