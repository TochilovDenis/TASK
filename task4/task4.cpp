#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int i;
    cout << "������� ����� ����� �� 0 �� 9 : \n";
    cin >> i;
    if (i == 0)
        cout << "�� ����� `����`" << "\n";
    else if (i == 1)
        cout << "�� ����� `����`" << "\n";
    else if (i == 2)
        cout << "�� ����� `���`" << "\n";
    else if (i == 3)
        cout << "�� ����� `���`" << "\n";
    else if (i == 4)
        cout << "�� ����� `������`" << "\n";
    else if (i == 5)
        cout << "�� ����� `����`" << "\n";
    else if (i == 6)
        cout << "�� ����� `�����`" << "\n";
    else if (i == 7)
        cout << "�� ����� `����`" << "\n";
    else if (i == 8)
        cout << "�� ����� `������`" << "\n";
    else if (i == 9)
        cout << "�� ����� `������`" << "\n";
    else
        cout << "������� ����� ����� �� 0 �� 9: " << i << "\n"
        "����� ���� ������ ����� �� 0 �� 9, � �� ����� " << i << "\n";
    return 0;
}