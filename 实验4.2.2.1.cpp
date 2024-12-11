#include <iostream>
using namespace std;

// ����ԭ�ͣ����s1�Ƿ���s2���Ӵ�
int indexof(const char *s1, const char *s2) {
    int i = 0, j = 0;

    // ����s2
    while (s2[i] != '\0') {
        // ��s2���ַ���s1�ĵ�һ���ַ�ƥ��ʱ����ʼ����ַ��Ƚ�
        if (s2[i] == s1[j]) {
            int start = i;
            // �������ַ��Ƿ�ƥ��
            while (s1[j] != '\0' && s2[i] == s1[j]) {
                i++;
                j++;
            }
            // �����ȫƥ��s1��������ʼλ��
            if (s1[j] == '\0') {
                return start;
            }
            // ���û����ȫƥ�䣬�ָ�i��j��������
            i = start + 1;
            j = 0;
        } else {
            i++;
        }
    }

    // û���ҵ�ƥ����Ӵ�
    return -1;
}

int main() {
    char s1[100], s2[100];

    // ���������ַ���
    cout << "�������ַ��� s1: ";
    cin.getline(s1, 100);
    cout << "�������ַ��� s2: ";
    cin.getline(s2, 100);

    // ����indexof��������Ƿ�Ϊ�Ӵ�
    int index = indexof(s1, s2);

    // ������
    if (index != -1) {
        cout << "�Ӵ� " << s1 << " ���ַ��� " << s2 << " �еĵ�һ�γ���λ��Ϊ: " << index << endl;
    } else {
        cout << "�Ӵ� " << s1 << " ���ַ��� " << s2 << " ��δ�ҵ�" << endl;
    }

    return 0;
}

