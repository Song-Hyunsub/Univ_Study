#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    while(1){
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0) return 0;
        else if(a<c && b<c && a*a + b*b == c*c) cout << "right" << "\n";
        else if(a<b && c<b && a*a + c*c == b*b) cout << "right" << "\n";
        else if(b<a && c<a && c*c + b*b == a*a) cout << "right" << "\n";
        else cout << "wrong" << "\n";
    }
    return 0;
}
