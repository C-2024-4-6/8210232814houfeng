#include <iostream>
using namespace std;

// 合并两个排列好的数组
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;

    // 使用双指针合并两个数组
    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k++] = list1[i++];
        } else {
            list3[k++] = list2[j++];
        }
    }

    // 如果list1有剩余元素，加入list3
    while (i < size1) {
        list3[k++] = list1[i++];
    }

    // 如果list2有剩余元素，加入list3
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

// 测试程序
int main() {
    int size1, size2;

    // 提示用户输入第一个数组
    cout << "请输入第一个数组的元素个数: ";
    cin >> size1;
    int list1[size1];

    cout << "请输入第一个数组的元素（已排序）：";
    for (int i = 0; i < size1; ++i) {
        cin >> list1[i];
    }

    // 提示用户输入第二个数组
    cout << "请输入第二个数组的元素个数: ";
    cin >> size2;
    int list2[size2];

    cout << "请输入第二个数组的元素（已排序）：";
    for (int i = 0; i < size2; ++i) {
        cin >> list2[i];
    }

    // 创建一个数组，储存结果 
    int list3[size1 + size2];

    // 调用合并函数
    merge(list1, size1, list2, size2, list3);

    // 输出合并后的数组
    cout << "合并后的数组为：";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}

