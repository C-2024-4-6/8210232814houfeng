#include <iostream>
using namespace std;

class Student {
public:
    // 默认构造函数
    Student() : id(0), score(0.0) {}

    // 带参构造函数
    Student(int id, double score) {
        this->id = id;
        this->score = score;
    }

    // 设置学生的学号和成绩
    void set_value(int id, double score) {
        this->id = id;     // 使用 this 指针来区分成员变量
        this->score = score; // 使用 this 指针来区分成员变量
    }

    // 获取成绩
    double get_score() const {
        return score;
    }

    // 获取学号
    int get_id() const {
        return id;
    }

private:
    int id;    // 学号
    double score;  // 成绩
};

// max函数：通过指向对象的指针查找并输出成绩最高的学生学号
void max(Student* students, int size) {
    Student* max_student = &students[0];  // 假设第一个学生成绩最高
    for (int i = 1; i < size; ++i) {
        if (students[i].get_score() > max_student->get_score()) {
            max_student = &students[i];  // 找到更高成绩的学生
        }
    }
    cout << "成绩最高的学生的学号是" << max_student->get_id() << endl;
}

int main() {
    Student students[5];  // 创建5个学生对象的数组

    // 输入5个学生的学号和成绩
    for (int i = 0; i < 5; ++i) {
        int id;
        double score;
        cout << "输入学生" << (i + 1) << "的学号和成绩 ";
        cin >> id >> score;
        students[i].set_value(id, score);
    }

    // 调用max函数，找出成绩最高的学生并输出学号
    max(students, 5);

    return 0;
}

