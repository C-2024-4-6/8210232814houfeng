// main.cpp
#include <iostream>
#include "mytemperature.h" // 引入头文件
using namespace std;

int main() {
    // 打印标题行
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
    cout << "-----------------------------------------------" << endl;
    
    // 循环输出多组转换结果
    for (double celsius = 40.0; celsius >= 31.0; --celsius) {
        double fahrenheit = celsius_to_fah(celsius);  // 摄氏转华氏
        double fahrenheit2 = 120.0 - (40 - celsius) * 2.0;  // 华氏到摄氏，通过线性关系得出
        double celsius2 = fahrenheit_to_cels(fahrenheit2);  // 华氏转摄氏
        
        // 输出每行数据
        cout << celsius << "        " << fahrenheit << "        |   "
             << fahrenheit2 << "        " << celsius2 << endl;
    }
    return 0;
}

