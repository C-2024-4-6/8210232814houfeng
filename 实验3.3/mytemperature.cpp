// mytemperature.cpp
#include "mytemperature.h"

// �����¶�ת�����¶�
double celsius_to_fah(double cel) {
    return (cel * 9.0 / 5.0) + 32;
}

// �����¶�ת�����¶�
double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5.0 / 9.0;
}

