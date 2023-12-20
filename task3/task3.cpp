#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (number > 0)
        cout << "Вы ввели положительное число" << endl;
    else if (number < 0)
        cout << "Вы ввели отрицательное число" << endl;
    else
        cout << "Вы ввели ноль" << endl;

    return 0;
}