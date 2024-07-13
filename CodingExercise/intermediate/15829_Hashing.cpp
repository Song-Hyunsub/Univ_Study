#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string str; 
    long long M = 1234567891;
    int l;
    long long H = 0;
    
    cin >> l >> str;
    long long r = 1;
    for(int i=0; i<str.length(); i++){
            H += ((str[i] - 'a'+1) * r);
            H %= M;
            r = (r * 31) % M;    // r값이 너무 커지므로 M으로 나눔
    }

    cout << H << endl;
    return 0;
}
