#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это


void swap(int *pa, int *pb) {
	int swap = *pa;
	*pa = *pb;
	*pb = swap;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int plus, minus, divide, multiply;
	int a, b;

	cout << "Введите первое число: ";
	cin  >> a;
	cout << "Введите второе число: ";
	cin  >> b;

	swap(a, b);

	cout << a << endl;
	cout << b << endl;

	return 0;
}
