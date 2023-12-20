#include <iostream>
#include <stdlib.h>
using namespace std;

void FillArray(int* array, int size, int a, int b);
void PrintPositive(int* array, int size);

int main() {
    setlocale(LC_ALL, "");

    int n, a, b;
    cout << "Введите целое число от 10 до 50: ";
    cin >> n;
    cout << "Введите целое число от 50 до 100 (a): ";
    cin >> a;
    cout << "Введите целое число от -25 до 25 (b): ";
    cin >> b;

    srand(time(0));
    int* arr = new int[n];
    FillArray(arr, n, a, b);
    PrintPositive(arr, n);
    
    delete[] arr;
    return 0;
}

void FillArray(int* array, int size, int a, int b) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % (a - b + 1) + b;
    }
}

void PrintPositive(int* array, int size) {
    cout << "Положительные числа:\n";
    for (int i = 0; i < size; i++) {
        if (array[i] > 0)
            cout << "[" << i + 1 << "]: " << array[i] << "\n";
    }
    cout << endl;
}
