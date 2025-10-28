#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0)); 
    const int SIZE = 12;
    vector<int> positive;
    vector<int> negative;

        while (positive.size() < 6) {
        int num = rand() % 10 + 1; // від 1 до 10
        positive.push_back(num);
    }

        while (negative.size() < 6) {
        int num = -(rand() % 10 + 1); // від -1 до -10
        negative.push_back(num);
    }

    vector<int> array;
    array.insert(array.end(), positive.begin(), positive.end());
    array.insert(array.end(), negative.begin(), negative.end());

    random_shuffle(array.begin(), array.end());

    cout << "Отриманий масив з 12 елементів:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
