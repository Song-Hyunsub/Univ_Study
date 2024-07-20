#include <iostream>
#include <queue>
#include <string>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin >> N;
    queue<int> q;
    while(N>=1)
    {
        int X;
        cin >> s;
        if(s == "push"){
            cin >> X;
            q.push(X);
        } else if(s=="pop"){
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            }
            else cout << -1 << endl;
        } else if(s=="size"){
            cout << q.size() << endl;
        } else if(s=="empty"){
            if (q.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        } else if(s=="front"){
            if (!q.empty()) cout << q.front() << endl;
            else cout << -1 << endl;
        } else if(s=="back"){
            if (!q.empty()) cout << q.back() << endl;
            else cout << -1 << endl;            
        }
        N--;
    }
    return 0;
}
