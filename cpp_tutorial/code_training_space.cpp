#include <iostream>
#include <string>
#define getPlus(a,b) ((a)+(b))
#define getMinus(a,b) ((a) - (b))
#define getMultiply(a,b) ((a) * (b))
#define getDivide(a,b) ((a) / (b))
using namespace std; // Пространство имён - пока что не знаю, что это
using namespace std;

// Указатель на функцию - прикольная штука.
void calculate(int a, int b, int (*method)(int a, int b)) {
    cout << "Результат: " << method(a, b) << endl;
}


int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 123;
    int b = 3;

    cout << getPlus(a, b) << endl;
    cout << getMinus(a, b) << endl;
    cout << getMultiply(a, b) << endl;
    cout << getDivide(a, b) << endl;


    return 0;
}