// main.cpp
#include <iostream>
#include "mytemperature.h" // ����ͷ�ļ�
using namespace std;

int main() {
    // ��ӡ������
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
    cout << "-----------------------------------------------" << endl;
    
    // ѭ���������ת�����
    for (double celsius = 40.0; celsius >= 31.0; --celsius) {
        double fahrenheit = celsius_to_fah(celsius);  // ����ת����
        double fahrenheit2 = 120.0 - (40 - celsius) * 2.0;  // ���ϵ����ϣ�ͨ�����Թ�ϵ�ó�
        double celsius2 = fahrenheit_to_cels(fahrenheit2);  // ����ת����
        
        // ���ÿ������
        cout << celsius << "        " << fahrenheit << "        |   "
             << fahrenheit2 << "        " << celsius2 << endl;
    }
    return 0;
}

