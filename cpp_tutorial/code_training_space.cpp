#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это

// Прототипы - нужны, чтобы объявить их в начале, а логику написать в нужном месте
void prototype1();
void prototype2();
void prototype3();
void prototype4();

int main()
{
    prototype1();
    prototype4();
    prototype3();
    prototype2();
    return 0;
}

void prototype1() {
    cout << "1" << endl;
}

void prototype2() {
    cout << "2" << endl;
}

void prototype3() {
    cout << "3" << endl;
}

void prototype4() {
    cout << "4" << endl;
}
