#include <iostream>
#include <cctype>  // for isdigit() and toupper()
using namespace std;

// 将16进制字符串转换为10进制数的函数
int parseHex(const char *const hexString) {
    int result = 0;  // 存储最终的10进制结果
    int i = 0;
    
    // 遍历字符串中的每个字符
    while (hexString[i] != '\0') {
        char ch = toupper(hexString[i]);  // 将字符转换为大写字母（确保统一）
        
        // 如果字符是数字
        if (isdigit(ch)) {
            result = result * 16 + (ch - '0');  // '0'的ASCII值为48，所以减去'0'得到数字值
        }
        // 如果字符是字母A-F
        else if (ch >= 'A' && ch <= 'F') {
            result = result * 16 + (ch - 'A' + 10);  // 'A'对应10, 'B'对应11, ..., 'F'对应15
        }
        // 非法字符（不是数字或A-F），返回-1
        else {
            return -1;  // 输入无效的16进制字符
        }
        
        i++;
    }
    
    return result;
}

int main() {
    // 测试函数
    const char *hexString = "A5";
    int decimalValue = parseHex(hexString);
    
    if (decimalValue != -1) {
        cout << "16进制数 " << hexString << " 转换为 10进制是: " << decimalValue << endl;
    } else {
        cout << "输入的16进制数无效!" << endl;
    }
    
    return 0;
}

