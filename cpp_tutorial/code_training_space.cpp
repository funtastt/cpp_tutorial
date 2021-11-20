#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это


void print() {
    cout << "HEllo" << endl;
}

void print(string s) {
    cout << s << endl;
}

int main()
{
    print();  // 1
    print("byee"); // перегрузка
    return 0;
}
 // Я понял как работает git commit и когда git видит изменения.