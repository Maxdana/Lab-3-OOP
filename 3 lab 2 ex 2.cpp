#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int N = 6;
    int A[N][N];
    int startIndex, endIndex;
    int startArg, step;
    cout << "��������� �������� �������� ����� (0-5): ";
    cin >> startIndex;
    cout << "ʳ����� �������� �������� ����� (0-5): ";
    cin >> endIndex;
    cout << "��������� �������� ���������: ";
    cin >> startArg;
    cout << "���� ���� ���������: ";
    cin >> step;
    for (int i = startIndex; i <= endIndex; i++) {
        for (int j = startIndex; j <= endIndex; j++) {
            A[i][j] = startArg + (i - startIndex) * step + (j - startIndex) * step;
        }
    }
    cout << "\n��������� �������:\n";
    for (int i = startIndex; i <= endIndex; i++) {
        for (int j = startIndex; j <= endIndex; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    int delRow = 2;
    cout << "\n������� ��� 3-�� �����:\n";
    for (int i = startIndex; i <= endIndex; i++) {
        if (i == delRow) continue;
        for (int j = startIndex; j <= endIndex; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
