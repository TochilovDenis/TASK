#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string generateString(int length);
void writeStringsToFile(string filename, int num_strings, int string_length);

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));
    writeStringsToFile("result.txt", 10, 20);
    return 0;
}

string generateString(int length) {
    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int string_length = sizeof(alphanum) - 1;
    string str = "";

    for (int i = 0; i < length; i++) {
        str += alphanum[rand() % string_length];
    }

    return str;
}

void writeStringsToFile(string filename, int num_strings, int string_length) {
    ofstream file(filename);

    if (!file) {
        cerr << "Невозможно открыть файл";
        return;
    }

    for (int i = 0; i < num_strings; i++) {
        file << generateString(string_length) << "\n";
    }

    file.close();
}