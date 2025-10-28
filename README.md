#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <random>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<pair<int, int>> examples;
    for (int a = 2; a <= 9; a++) {
        for (int b = a; b <= 9; b++) {
            examples.push_back({a, b});
        }
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(examples.begin(), examples.end(), g);

    cout << "15 випадкових прикладів з таблиці множення:\n\n";

    for (int i = 0; i < 15 && i < examples.size(); i++) {
        int a = examples[i].first;
        int b = examples[i].second;
        cout << a << " x " << b << " = " << (a * b) << endl;
    }

    return 0;
}
