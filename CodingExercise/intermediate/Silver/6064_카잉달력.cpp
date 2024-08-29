#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        int maxYear = lcm(M, N);
        int result = -1;

        // x와 y는 각각 주어진 M과 N 범위 내의 값이므로 x, y에 대응하는 해는 x부터 시작해서 M과 N의 배수씩 증가하는 규칙성을 가진다.
        for (int k = x; k <= maxYear; k += M) {
            if ((k - 1) % N + 1 == y) {
                result = k;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
