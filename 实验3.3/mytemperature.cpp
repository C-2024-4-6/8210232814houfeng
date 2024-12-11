// mytemperature.cpp
#include "mytemperature.h"

// 摄氏温度转华氏温度
double celsius_to_fah(double cel) {
    return (cel * 9.0 / 5.0) + 32;
}

// 华氏温度转摄氏温度
double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5.0 / 9.0;
}

