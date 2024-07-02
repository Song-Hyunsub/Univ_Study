/*
동적배열을 할당하였다면
다시 꼭 해제해줘야 한다!
new 선언 => delete[] A;
malloc 선언 => free() 등..
*/

#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    if (N >= 1 && N <= 10000 && X >= 1 && X <= 10000) {
        int *A = new int[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] < 1 || A[i] > 10000) {
                cout << "Error!";
                delete[] A;  // 동적 배열 해제
                return 0;
            }
        }

        // X보다 작은 수를 출력
        for (int i = 0; i < N; i++) {
            if (A[i] < X) {
                cout << A[i] << " ";
            }
        }

        delete[] A;  // 동적 배열 해제
    } else {
        cout << "Error!";
    }
    
    return 0;
}
