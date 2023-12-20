#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

template <typename T>
void printVariable(T var) {
	cout << "Результат: ";
	for (int i = 0; i < 5; i++) {
		cout << var << " ";
	}
	cout << endl;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	double d;
	char ch;
	string str;
	long l;
	string choice;
	do {
		cout << "Введите int, double, char, string or long: ";
		cin >> choice;
		if (choice == "int") {
			cout << "Введите число: ";
			cin >> n;
			printVariable(n);

		}
		else if (choice == "double") {
			cout << "Введите число c плавающей точкой: ";
			cin >> d;
			printVariable(d);
		}
		else if (choice == "char") {
			cout << "Введите символ: ";
			cin >> ch;
			cout << "Введенное символ: " << ch << "\n";
			printVariable(ch);
		}
		else if (choice == "string") {
			cout << "Введите строку: ";
			cin.ignore();
			getline(cin, str);
			printVariable(str);
		}
		else if (choice == "long") {
			cout << "Введите число long (max = 2147483647): ";
			cin >> l;
			printVariable(l);
		}
		else {
			cout << "Не найден ваш запрос: " << choice
				<< "\nВведите заново!\n";
		}
	} while (choice != "quit");

	cout << "Программа завершена.";
	
	return 0;
}