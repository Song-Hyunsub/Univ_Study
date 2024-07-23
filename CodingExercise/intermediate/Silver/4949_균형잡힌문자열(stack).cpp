#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(const string& str) {
    stack<char> s;
    for (char ch : str) {
        if (ch == '(' || ch == '[') {
            s.push(ch); // 왼쪽 괄호를 스택에 넣는다.
        } else if (ch == ')') {
            if (s.empty() || s.top() != '(') {
                return false; // 스택이 비어있거나, 최상단이 대응되는 왼쪽 괄호가 아니면 false 반환
            }
            s.pop(); // 대응되는 왼쪽 괄호가 있으면 스택에서 제거
        } else if (ch == ']') {
            if (s.empty() || s.top() != '[') {
                return false; // 스택이 비어있거나, 최상단이 대응되는 왼쪽 괄호가 아니면 false 반환
            }
            s.pop(); // 대응되는 왼쪽 괄호가 있으면 스택에서 제거
        }
    }
    return s.empty(); // 스택이 비어있으면 모든 괄호가 짝을 이룬 것이므로 true 반환
}

int main() {
    string str;
    while (true) {
        getline(cin, str); // 표준 입력에서 한 줄을 읽어들인다.
        if (str == ".") break; // 입력이 "."이면 반복을 종료한다.
        if (isBalanced(str)) {
            cout << "yes" << endl; // 균형이 잡혔다면 "yes"를 출력한다.
        } else {
            cout << "no" << endl; // 균형이 잡히지 않았다면 "no"를 출력한다.
        }
    }
    return 0;
}
