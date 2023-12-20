#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

template <typename T>
void printVariable(T var) {
	cout << "–езультат: ";
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
		cout << "¬ведите int, double, char, string or long: ";
		cin >> choice;
		if (choice == "int") {
			cout << "¬ведите число: ";
			cin >> n;
			printVariable(n);

		}
		else if (choice == "double") {
			cout << "¬ведите число c плавающей точкой: ";
			cin >> d;
			printVariable(d);
		}
		else if (choice == "char") {
			cout << "¬ведите символ: ";
			cin >> ch;
			cout << "¬веденное символ: " << ch << "\n";
			printVariable(ch);
		}
		else if (choice == "string") {
			cout << "¬ведите строку: ";
			cin.ignore();
			getline(cin, str);
			printVariable(str);
		}
		else if (choice == "long") {
			cout << "¬ведите число long (max = 2147483647): ";
			cin >> l;
			printVariable(l);
		}
		else {
			cout << "Ќе найден ваш запрос: " << choice
				<< "\n¬ведите заново!\n";
		}
	} while (choice != "quit");
	cout << "ѕрограмма завершена.";
	
	return 0;
}

//#include <iostream>
//#include <string>
//
//void printVariable(int var) {
//	for (int i = 0; i < 5; i++) {
//		std::cout << var << std::endl;
//	}
//}
//
//void printVariable(double var) {
//	for (int i = 0; i < 5; i++) {
//		std::cout << var << std::endl;
//	}
//}
//
//void printVariable(char var) {
//	for (int i = 0; i < 5; i++) {
//		std::cout << var << std::endl;
//	}
//}
//
//void printVariable(std::string var) {
//	for (int i = 0; i < 5; i++) {
//		std::cout << var << std::endl;
//	}
//}
//
//void printVariable(long var) {
//	for (int i = 0; i < 5; i++) {
//		std::cout << var << std::endl;
//	}
//}
//
//int main() {
//	int intVar;
//	std::cout << "¬ведите число int: ";
//	std::cin >> intVar;
//	printVariable(intVar);
//
//	double doubleVar;
//	std::cout << "¬ведите число double: ";
//	std::cin >> doubleVar;
//	printVariable(doubleVar);
//
//	char charVar;
//	std::cout << "¬ведите символ: ";
//	std::cin >> charVar;
//	printVariable(charVar);
//
//	std::string stringVar;
//	std::cout << "¬ведите строку: ";
//	std::cin >> stringVar;
//	printVariable(stringVar);
//
//	long longVar;
//	std::cout << "¬ведите число long: ";
//	std::cin >> longVar;
//	printVariable(longVar);
//
//	return 0;
//}