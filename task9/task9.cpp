#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string generatePassword(int length) {
    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int string_length = sizeof(alphanum) - 1;
    string password = "";

    for (int i = 0; i < length; i++) {
        password += alphanum[rand() % string_length];
    }

    return password;
}

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));
    string password = generatePassword(32);
    cout << "—генерированный пароль: " << password << endl;
    return 0;
}