/*
1~30에서 입력된 수를 지우고 나머지를 출력(작은 값이 위, 다른 값이 아래)하는 원리

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N = 30;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        v[i] = i + 1;
    }

    int input;
    while (cin >> input) {
        if (input >= 1 && input <= 30) {
            auto new_end = remove(v.begin(), v.end(), input);   // std::remove를 사용하여 해당 값을 벡터의 끝으로 이동시키고 새로운 끝을 반환받음
            v.erase(new_end, v.end());       // std::vector::erase를 사용하여 새로운 끝부터 실제 끝까지의 원소를 삭제
        } else {
            cout << "Error!" << endl;
            return 0;
        }
    }

    sort(v.begin(), v.end());    // 원소 정렬
    for (int val : v) {
        cout << val << endl;
    }
    return 0;
}
