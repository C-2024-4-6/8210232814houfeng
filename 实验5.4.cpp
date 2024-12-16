#include <iostream>
using namespace std;

class Student {
public:
    // Ĭ�Ϲ��캯��
    Student() : id(0), score(0.0) {}

    // ���ι��캯��
    Student(int id, double score) {
        this->id = id;
        this->score = score;
    }

    // ����ѧ����ѧ�źͳɼ�
    void set_value(int id, double score) {
        this->id = id;     // ʹ�� this ָ�������ֳ�Ա����
        this->score = score; // ʹ�� this ָ�������ֳ�Ա����
    }

    // ��ȡ�ɼ�
    double get_score() const {
        return score;
    }

    // ��ȡѧ��
    int get_id() const {
        return id;
    }

private:
    int id;    // ѧ��
    double score;  // �ɼ�
};

// max������ͨ��ָ������ָ����Ҳ�����ɼ���ߵ�ѧ��ѧ��
void max(Student* students, int size) {
    Student* max_student = &students[0];  // �����һ��ѧ���ɼ����
    for (int i = 1; i < size; ++i) {
        if (students[i].get_score() > max_student->get_score()) {
            max_student = &students[i];  // �ҵ����߳ɼ���ѧ��
        }
    }
    cout << "�ɼ���ߵ�ѧ����ѧ����" << max_student->get_id() << endl;
}

int main() {
    Student students[5];  // ����5��ѧ�����������

    // ����5��ѧ����ѧ�źͳɼ�
    for (int i = 0; i < 5; ++i) {
        int id;
        double score;
        cout << "����ѧ��" << (i + 1) << "��ѧ�źͳɼ� ";
        cin >> id >> score;
        students[i].set_value(id, score);
    }

    // ����max�������ҳ��ɼ���ߵ�ѧ�������ѧ��
    max(students, 5);

    return 0;
}

