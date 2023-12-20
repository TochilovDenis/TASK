#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int i;
    cout << "Введите целое число от 0 до 9 : \n";
    cin >> i;
    if (i == 0)
        cout << "Вы ввели `ноль`" << "\n";
    else if (i == 1)
        cout << "Вы ввели `один`" << "\n";
    else if (i == 2)
        cout << "Вы ввели `два`" << "\n";
    else if (i == 3)
        cout << "Вы ввели `три`" << "\n";
    else if (i == 4)
        cout << "Вы ввели `четыре`" << "\n";
    else if (i == 5)
        cout << "Вы ввели `пять`" << "\n";
    else if (i == 6)
        cout << "Вы ввели `шесть`" << "\n";
    else if (i == 7)
        cout << "Вы ввели `семь`" << "\n";
    else if (i == 8)
        cout << "Вы ввели `восемь`" << "\n";
    else if (i == 9)
        cout << "Вы ввели `девять`" << "\n";
    else
        cout << "Введите целое число от 0 до 9: " << i << "\n"
        "Нужно было ввести число от 0 до 9, а вы ввели " << i << "\n";
    return 0;
}