#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это

// Разобрался с объявлением дефолтных значений в С++
void defaultParams(int a, int b = 5);

int main()
{
    defaultParams(1);
    defaultParams(3, 4);
    return 0;
}

void defaultParams(int a, int b) {
    cout << a << " " << b << endl;
}