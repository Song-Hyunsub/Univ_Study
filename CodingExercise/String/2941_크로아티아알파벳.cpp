/*
c=, c-, dz=, d-, lj, nj, s=, z=
=> 크로아티아 알파벳
입력) string s; cin >> s;
크로아티아 알파벳 판별하는 로직 구현
for(int i=0; i<s.size(); i++){
if(s[i]=='c' && s[i+1]=='-') => count++; i++;
...
}
cout << count;
return 0;
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='c'&&s[i+1]=='=') { count++; i++; }
        else if(s[i]=='c'&&s[i+1]=='-') { count++; i++; }
        else if(s[i]=='d'&&s[i+1]=='z'&&s[i+2]=='=') { count++; i+=2; }
        else if(s[i]=='d'&&s[i+1]=='-') { count++; i++; }
        else if(s[i]=='l'&&s[i+1]=='j') { count++; i++; }
        else if(s[i]=='n'&&s[i+1]=='j') { count++; i++; }
        else if(s[i]=='s'&&s[i+1]=='=') { count++; i++; }
        else if(s[i]=='z'&&s[i+1]=='=') { count++; i++; }
        else count++;
    }
    cout << count;
    return 0;
}
