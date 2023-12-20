#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

template <typename T>
void printVariable(T var) {
	cout << "���������: ";
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
		cout << "������� int, double, char, string or long: ";
		cin >> choice;
		if (choice == "int") {
			cout << "������� �����: ";
			cin >> n;
			printVariable(n);

		}
		else if (choice == "double") {
			cout << "������� ����� c ��������� ������: ";
			cin >> d;
			printVariable(d);
		}
		else if (choice == "char") {
			cout << "������� ������: ";
			cin >> ch;
			cout << "��������� ������: " << ch << "\n";
			printVariable(ch);
		}
		else if (choice == "string") {
			cout << "������� ������: ";
			cin.ignore();
			getline(cin, str);
			printVariable(str);
		}
		else if (choice == "long") {
			cout << "������� ����� long (max = 2147483647): ";
			cin >> l;
			printVariable(l);
		}
		else {
			cout << "�� ������ ��� ������: " << choice
				<< "\n������� ������!\n";
		}
	} while (choice != "quit");
	cout << "��������� ���������.";
	
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
//	std::cout << "������� ����� int: ";
//	std::cin >> intVar;
//	printVariable(intVar);
//
//	double doubleVar;
//	std::cout << "������� ����� double: ";
//	std::cin >> doubleVar;
//	printVariable(doubleVar);
//
//	char charVar;
//	std::cout << "������� ������: ";
//	std::cin >> charVar;
//	printVariable(charVar);
//
//	std::string stringVar;
//	std::cout << "������� ������: ";
//	std::cin >> stringVar;
//	printVariable(stringVar);
//
//	long longVar;
//	std::cout << "������� ����� long: ";
//	std::cin >> longVar;
//	printVariable(longVar);
//
//	return 0;
//}