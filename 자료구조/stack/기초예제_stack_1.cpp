#include <iostream>
#include <stack>
#include <string>
using namespace std;
/*
명령 수 N 입력 받기
스택 초기화하기
명령어를 N번동안 입력받은 후 결과 출력하기
*/
int main() {
    int N;
    cin >> N;
    stack<int> s;
    while(N>=1) {
        string command;
        cin >> command;
        if (command == "push"){
            int x;
            cin >> x;
            s.push(x);
        } else if (command == "pop") {
            if(s.empty()){
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
                s.pop();
            }
        } else if (command == "size") {
            cout << s.size() << endl;
        } else if (command == "empty") {
            cout << (s.empty() ? 1 : 0) << endl;
        } else if (command == "top") {
            if (s.empty()) {
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
            }
        }
    N--;    
    }
    return 0;
}
