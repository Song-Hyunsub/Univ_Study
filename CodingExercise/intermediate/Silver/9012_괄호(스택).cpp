/*
VPS 판별하기)
()(()) => YES
())() => NO
Stack을 이용하여 판별하는 방법:
문자열에서 '(' 문자가 오면 스택에 -1로 저장
')' 문자가 오면 스택의 원소를 제거 
(단, 비어있거나, 제일 위의 원소가 -1이 아니면 isValid를 false로 두고 break)
모두 시행하였을 때, 스택이 비어있으면 YES, 비어있지 않으면 NO를 출력한다.

*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    while (N > 0) {
        string str;
        cin >> str;
        stack<int> s;
        int sum = 0, mul = 1;
        bool isValid = true;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '(') {
                s.push(-1);
            } else if (str[i] == ')') {
                if (s.empty() || s.top() != -1) {
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }
        // 스택이 비어있는지 확인
        if (!s.empty()) {
            isValid = false;
        }
        // 결과 출력
        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        --N;
    }
    return 0;
}
