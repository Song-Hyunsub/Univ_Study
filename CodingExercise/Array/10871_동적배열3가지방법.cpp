/*
Solution 1 : 동적 배열 
ex) int *A = new int[N];  delete[] A;

Solution 2 : 벡터 선언 
ex) vector<int> A(N);

Solution 3 : 메모리 동적 할당 
ex) int *A = (int*)malloc(N * sizeof(int));  free(A);
*/

/* [Solution 1] => 이 경우에는 동적 배열을 할당한 후 delete[]로 다시 꼭 해제해줘야 한다!
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
*/

/* [Solution 2] => 벡터로 선언한 경우에는 다시 해제할 필요가 없다!
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    if (N >= 1 && N <= 10000 && X >= 1 && X <= 10000) {
        vector<int> A(N);  // 크기가 N인 벡터 선언
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] < 1 || A[i] > 10000) {
                cout << "Error!";
                return 0;
            }
        }

        // X보다 작은 수를 출력
        for (int i = 0; i < N; i++) {
            if (A[i] < X) {
                cout << A[i] << " ";
            }
        }
    } else {
        cout << "Error!";
    }
    return 0;
}
*/


// [Solution 3] => malloc과 free를 이용한 메모리 동적 할당 => free로 메모리를 꼭 해제

#include <iostream>
#include <cstdlib> // for malloc and free
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    if (N >= 1 && N <= 10000 && X >= 1 && X <= 10000) {
        int *A = (int*)malloc(N * sizeof(int)); // 크기가 N인 동적 배열 할당
        if (A == nullptr) {
            cout << "Memory allocation failed." << endl;
            return 1;
        }
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] < 1 || A[i] > 10000) {
                cout << "Error!";
                free(A); // 동적 배열 해제
                return 0;
            }
        }

        // X보다 작은 수를 출력
        for (int i = 0; i < N; i++) {
            if (A[i] < X) {
                cout << A[i] << " ";
            }
        }

        free(A); // 동적 배열 해제
    } else {
        cout << "Error!";
    }
    
    return 0;
}
