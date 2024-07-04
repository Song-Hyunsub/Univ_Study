#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; 
    int num=0;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]>='A' && s[i]<='C') num+=3;
        else if(s[i]>='D' && s[i]<='F') num+=4;
        else if(s[i]>='G' && s[i]<='I') num+=5;
        else if(s[i]>='J' && s[i]<='L') num+=6;
        else if(s[i]>='M' && s[i]<='O') num+=7;
        else if(s[i]>='P' && s[i]<='S') num+=8;
        else if(s[i]>='T' && s[i]<='V') num+=9;
        else if(s[i]>='W' && s[i]<='Z') num+=10;
        else { cout << "Error!"; return 0; }
    }
    cout << num;
    return 0;
}
