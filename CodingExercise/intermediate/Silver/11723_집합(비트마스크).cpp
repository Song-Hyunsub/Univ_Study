/* 공집합 S가 주어졌을 때, 아래 연산을 수행하는 프로그램을 작성하시오.
add x : S에 x를 추가한다. (1<=x<=20) S에 x가 이미 있는 경우 연산을 무시한다.
remove x: S에서 x를 제거한다. (1<=x<=20) S에 x가 없는 경우 연산을 무시한다.
check x : S에 X가 있으면 1을, 없으면 0을 출력한다.
toggle x : S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1<=x<=20)
all : S를 {1,2,..., 20으로 바꾼다.}
empty : S를 공집합으로 바꾼다.

입력
*/

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int S = 0; // 공집합 S
    
    // 예제 연산
    string operation;
    int x;
    while (cin >> operation) {
        if (operation == "add") {
            cin >> x;
            S |= (1 << (x - 1));
        } else if (operation == "remove") {
            cin >> x;
            S &= ~(1 << (x - 1));
        } else if (operation == "check") {
            cin >> x;
            if (S & (1 << (x - 1))) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if (operation == "toggle") {
            cin >> x;
            S ^= (1 << (x - 1));
        } else if (operation == "all") {
            S = (1 << 20) - 1;
        } else if (operation == "empty") {
            S = 0;
        }
    }
    return 0;
}
