#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));
    int n;
    cout << "������� ����� ����� �� 10 �� 50: ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 41 + 10;
    }

    cout << "�������� �������: ";
    for (int i = 0; i < n; i++) {
        cout <<"[" << i + 1 << "] : " << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}