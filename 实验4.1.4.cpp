#include <iostream>
using namespace std;

// �ϲ��������кõ�����
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;

    // ʹ��˫ָ��ϲ���������
    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k++] = list1[i++];
        } else {
            list3[k++] = list2[j++];
        }
    }

    // ���list1��ʣ��Ԫ�أ�����list3
    while (i < size1) {
        list3[k++] = list1[i++];
    }

    // ���list2��ʣ��Ԫ�أ�����list3
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

// ���Գ���
int main() {
    int size1, size2;

    // ��ʾ�û������һ������
    cout << "�������һ�������Ԫ�ظ���: ";
    cin >> size1;
    int list1[size1];

    cout << "�������һ�������Ԫ�أ������򣩣�";
    for (int i = 0; i < size1; ++i) {
        cin >> list1[i];
    }

    // ��ʾ�û�����ڶ�������
    cout << "������ڶ��������Ԫ�ظ���: ";
    cin >> size2;
    int list2[size2];

    cout << "������ڶ��������Ԫ�أ������򣩣�";
    for (int i = 0; i < size2; ++i) {
        cin >> list2[i];
    }

    // ����һ�����飬������ 
    int list3[size1 + size2];

    // ���úϲ�����
    merge(list1, size1, list2, size2, list3);

    // ����ϲ��������
    cout << "�ϲ��������Ϊ��";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}

