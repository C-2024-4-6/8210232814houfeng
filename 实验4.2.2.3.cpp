#include <iostream>
using namespace std;

// ��������ʹ��ð�����������������򣨴�С����
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                // ����Ԫ��
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // ��������Ĵ�С
    cout << "����������Ĵ�С: ";
    cin >> n;

    // ��̬��������
    int* arr = new int[n];

    // ��������Ԫ��
    cout << "������ " << n << " ��������Ϊ����Ԫ��: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // ��������
    sortArray(arr, n);

    // ������������飨ʹ��ָ�뷽ʽ��������Ԫ�أ�
    cout << "����������Ԫ����: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";  // ͨ��ָ���������Ԫ��
    }
    cout << endl;

    // �ͷ��ڴ�
    delete[] arr;

    return 0;
}

