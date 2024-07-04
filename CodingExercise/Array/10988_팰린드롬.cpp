/*
팰린드롬 조사 로직 구현하기
string s; cin >> s;
int eq=0;
s[0]==s[n-1]
s[1]==s[n-2]
s[2]==s[n-3]
... (i=0 ~ i<=n/2)
각 양 끝 원소가 같을때마다 변수 eq에 1씩 더한다.
이때 eq==s.size()/2를 만족하면 1을
만족하지 않으면 0을 출력한다.
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int eq = 0;
    cin >> s;
    if (s.size() < 1 || s.size() > 100) {
        cout << "Error: The length of the string must be between 1 and 100." << endl;
        return 1; // 프로그램 종료
    }
    for(int i=0; i<s.size()/2; i++){
        if(s[i]==s[s.size()-i-1]) eq++;
    }
    if(eq==s.size()/2) cout << 1;
    else cout << 0;
    return 0;
}
