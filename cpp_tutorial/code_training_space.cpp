#include <iostream>
#include <string>
using namespace std; // Пространство имён - пока что не знаю, что это
using namespace std;

int getPlus(int a, int b) {
    return a + b;
}

int getMinus(int a, int b) {
    return a - b;
}

int getMultiply(int a, int b) {
    return a * b;
}

int getDivide(int a, int b) {
    return a / b;
}

void calculate(int a, int b, int (*method)(int a, int b)) {
    cout << "Результат: " << method(a, b);
}


int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 123;
    int b = 3;

    calculate(a, b, getPlus);
    calculate(a, b, getMinus);
    calculate(a, b, getMultiply);
    calculate(a, b, getDivide);

    return 0;
}