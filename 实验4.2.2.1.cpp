#include <iostream>
using namespace std;

// 函数原型：检查s1是否是s2的子串
int indexof(const char *s1, const char *s2) {
    int i = 0, j = 0;

    // 遍历s2
    while (s2[i] != '\0') {
        // 当s2的字符与s1的第一个字符匹配时，开始逐个字符比较
        if (s2[i] == s1[j]) {
            int start = i;
            // 检查后续字符是否匹配
            while (s1[j] != '\0' && s2[i] == s1[j]) {
                i++;
                j++;
            }
            // 如果完全匹配s1，返回起始位置
            if (s1[j] == '\0') {
                return start;
            }
            // 如果没有完全匹配，恢复i和j继续查找
            i = start + 1;
            j = 0;
        } else {
            i++;
        }
    }

    // 没有找到匹配的子串
    return -1;
}

int main() {
    char s1[100], s2[100];

    // 输入两个字符串
    cout << "请输入字符串 s1: ";
    cin.getline(s1, 100);
    cout << "请输入字符串 s2: ";
    cin.getline(s2, 100);

    // 调用indexof函数检查是否为子串
    int index = indexof(s1, s2);

    // 输出结果
    if (index != -1) {
        cout << "子串 " << s1 << " 在字符串 " << s2 << " 中的第一次出现位置为: " << index << endl;
    } else {
        cout << "子串 " << s1 << " 在字符串 " << s2 << " 中未找到" << endl;
    }

    return 0;
}

