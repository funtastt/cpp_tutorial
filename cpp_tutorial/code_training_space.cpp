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
    cout << "Ok" << endl;
    print();  // 1
    print("bye"); // перегрузка
    return 0;
}
