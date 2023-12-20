#include <iostream>
#include <cstdlib>
using namespace std;

void FillArray(int* array, int size);
void BubbleSort(int* array, int size);
void PrintSortArray(int* array, int size);

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));
    do{
        int n;
        cout << "������� ����� ����� �� 10 �� 50: ";
        cin >> n;

        int* arr = new int[n];
        FillArray(arr, n);
        BubbleSort(arr, n);
        PrintSortArray(arr, n);
        delete[] arr;
    } while (true);
    
    return 0;
}

void FillArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 41 + 10;
    }
}

void BubbleSort(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void PrintSortArray(int* array, int size) {
    cout << "�������� ������� � ������� �����������: ";
    for (int i = 0; i < size; i++) {
        cout << "[" << i + 1 << "] : " << array[i] << " ";
    }
    cout << endl;
}
