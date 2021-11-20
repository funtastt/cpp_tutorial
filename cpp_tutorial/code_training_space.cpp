#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это

// Generics C++
template<typename T>
T testTemplate(T a, T b){
    return a + b;
}

int main()
{
    cout << testTemplate(3.2,4.1);
    return 0;
}