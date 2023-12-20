#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int i;
	double d;
	char ch;
	string str;
	long l;

	string choice;
	cout << "Введите int, double, char, string or long: ";
	cin >> choice;
	if (choice == "int") {
		cout << "Введите число: ";
		cin >> i;
		cout << "Введенное число: " << i << "\n";
	}
	else if (choice == "double") {
		cout << "Введите число c плавающей точкой: ";
		cin >> d;
		cout << "Введенное число: " << d << "\n";
	}
	else if (choice == "char") {
		cout << "Введите символ: ";
		cin >> ch;
		cout << "Введенное символ: " << ch << "\n";
	}
	else if (choice == "string") {
		cout << "Введите строку: ";
		cin >> str;
		cout << "Введенное строка: " << str << "\n";
	}
	else if (choice == "long") {
		cout << "Введите число типа long: ";
		cin >> l;
		cout << "Введенное число: " << l << "\n";
	}
}