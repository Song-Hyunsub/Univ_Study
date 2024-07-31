#include <iostream>
using namespace std;

void ary_rcopy(int a[], const int b[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = b[n - i - 1];
    }
}

int main() {
    int n = 5;
    int b[] = {1, 2, 3, 4, 5};
    int a[n];

    // Q8: 배열 역순 복사
    ary_rcopy(a, b, n);
    cout << "ary_rcopy 결과: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
