#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "----- 곱셈표 -----\n   |";
    for (int i = 1; i <= 9; i++) cout << setw(3) << i;
    cout << "\n---+";
    for (int i = 1; i <= 9; i++) cout << "---";
    cout << endl;

    for (int i = 1; i <= 9; i++) {
        cout << setw(3) << i << "|";
        for (int j = 1; j <= 9; j++) cout << setw(3) << i * j;
        cout << endl;
    }

    return 0;
}
