#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это

void swap(int *a, int *b) {
	int swap = *a;
	*a = *b;
	*b = swap;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int a, b;
	cout << "1 число: ";
	cin >> a;
	cout << "2 число: ";
	cin >> b;

	swap(&a, &b);

	cout << "\n1 число: " << a << endl;
	cout << "2 число: " << b << endl;
}