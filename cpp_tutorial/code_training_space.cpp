#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это

void changeVariable(string *s);


int main() {
	string str = "Hello, world!";
	cout << str << endl;

	changeVariable(&str); // В метод отправляем адрес ячейки памяти нужной нам переменной.
	cout << str << endl;

	return 0;
}

void changeVariable(string *s) { 
	// В самом методе реинициализируем данные, которые сейчас  
	// находятся на нужном нам адресе ячейки памяти.
	*s = "Bye, world!";
}
