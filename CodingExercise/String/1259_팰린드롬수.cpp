/*
팰린드롬 알고리즘
int p=0;
for(int i; i<s.length(); i++){
    if(s[i] == s[s.length-i-1]) p++;
}
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    string s;
    int p=0;
    while(1){
        cin >> s;
        if(s=="0") return 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == s[s.length()-i-1]) p++;
        }
        if(p==s.length()) cout << "yes" << "\n";
        else cout << "no" << "\n";
        p=0;
    }
    return 0;
}
