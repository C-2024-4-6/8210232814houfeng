#include <iostream>
#include <cctype>  // for isdigit() and toupper()
using namespace std;

// ��16�����ַ���ת��Ϊ10�������ĺ���
int parseHex(const char *const hexString) {
    int result = 0;  // �洢���յ�10���ƽ��
    int i = 0;
    
    // �����ַ����е�ÿ���ַ�
    while (hexString[i] != '\0') {
        char ch = toupper(hexString[i]);  // ���ַ�ת��Ϊ��д��ĸ��ȷ��ͳһ��
        
        // ����ַ�������
        if (isdigit(ch)) {
            result = result * 16 + (ch - '0');  // '0'��ASCIIֵΪ48�����Լ�ȥ'0'�õ�����ֵ
        }
        // ����ַ�����ĸA-F
        else if (ch >= 'A' && ch <= 'F') {
            result = result * 16 + (ch - 'A' + 10);  // 'A'��Ӧ10, 'B'��Ӧ11, ..., 'F'��Ӧ15
        }
        // �Ƿ��ַ����������ֻ�A-F��������-1
        else {
            return -1;  // ������Ч��16�����ַ�
        }
        
        i++;
    }
    
    return result;
}

int main() {
    // ���Ժ���
    const char *hexString = "A5";
    int decimalValue = parseHex(hexString);
    
    if (decimalValue != -1) {
        cout << "16������ " << hexString << " ת��Ϊ 10������: " << decimalValue << endl;
    } else {
        cout << "�����16��������Ч!" << endl;
    }
    
    return 0;
}

