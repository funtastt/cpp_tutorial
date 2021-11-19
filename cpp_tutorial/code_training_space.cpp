#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это

int main()
{
    int i;
    setlocale(LC_ALL, "Rus"); // Русский в консоль 
    cout << "Введите целое число: ";
    cin >> i;
    cout << "Число ";
    if (i % 2 != 0)
    {
        cout << "не";
    }
    cout << "чётное";
}