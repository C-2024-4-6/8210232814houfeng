#include <iostream>
using namespace std;
int main() {
    double price = 0.8;
    int sum = 0; 
    int day = 1; 
    int secondtoday = 2; 
    while (sum + day <= 100) {
        sum += secondtoday; 
        day++;
        secondtoday *= 2; 
    }
    double sum2 = sum * price;
    double average = sum2 / (day - 1); 
    cout << "每天平均花费: " << average << " 元" << endl;
    return 0;
}
     
