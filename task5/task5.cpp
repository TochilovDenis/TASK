#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int n;
    cout << "Введите целое число от 1 до 6: ";
    cin >> n;

    if (n < 1 || n > 6)
    {
        cout << "Вы должны были ввести число от 1 до 6, а вы вели " << n << "\n";
    }

    char ch = 'a';
    for (int i = 1; i <= 26; i++) {
        if (i % n == 0) {
            cout << ch;
        }
        ch++;
    }
    cout << endl;
    return 0;
}