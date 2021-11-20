#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это


// Такой вариант работает - когда printHello() объявлен перед main()
void print() {
    cout << "HEllo" << endl;
}

void print(string s) {
    cout << s << endl;
}

int main()
{
    cout << "Ok" << endl;
    print();
    print("bye");
    return 0;
}

// А такой выдаёт ошибку С3861
//int main()
//{
//    cout << "Ok" << endl;
//    printHello();
//    return 0;
//}
// 
// void printHello() {
// cout << "HEllo" << endl;
// }

