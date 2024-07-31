#include <iostream>
using namespace std;

void ary_copy(int a[], const int b[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main() {
    int n = 5;
    int b[] = {1, 2, 3, 4, 5};
    int a[n];

    // Q7: 배열 복사
    ary_copy(a, b, n);
    cout << "ary_copy 결과: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
