#include <iostream>
using namespace std;

// 排序函数：使用冒泡排序对数组进行排序（从小到大）
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // 输入数组的大小
    cout << "请输入数组的大小: ";
    cin >> n;

    // 动态分配数组
    int* arr = new int[n];

    // 输入数组元素
    cout << "请输入 " << n << " 个整数作为数组元素: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // 排序数组
    sortArray(arr, n);

    // 输出排序后的数组（使用指针方式访问数组元素）
    cout << "排序后的数组元素是: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";  // 通过指针访问数组元素
    }
    cout << endl;

    // 释放内存
    delete[] arr;

    return 0;
}

