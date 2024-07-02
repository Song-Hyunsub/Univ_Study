#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N >= 1 && N <= 1000000) {
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] < -1000000 || A[i] > 1000000) {
                cout << "Error!";
                return 0;
            }
        }
        
        // 초기 min과 max 값을 첫 번째 요소로 설정
        int min = A[0];
        int max = A[0];
        
        for (int i = 1; i < N; i++) {
            if (A[i] > max) {
                max = A[i];
            }
            if (A[i] < min) {
                min = A[i];
            }
        }
        
        cout << min << " " << max;
    } else {
        cout << "Error!";
    }
    
    return 0;
}
