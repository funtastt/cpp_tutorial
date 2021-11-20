#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это


// Я хз зачем я это пишу, я это итак знаю - область определения переменных (глобальная и локальная)
int aGlobal = 0;

int method() {
    return ++aGlobal;
}

int method(int a) {
    return ++a;
}

int main()
{
    int aLocal = 0;
    cout << aGlobal;
    cout << method();
    cout << method(aLocal);
    cout << method(aGlobal);

    return 0;
}