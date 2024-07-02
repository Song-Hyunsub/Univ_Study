/*
[출력 시간 개선 방법]
ios_base::sync_with_stdio(false)
cin.tie(NULL)
endl => "\n"
*/

#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, A, B;
    cin >> T;
    if(T>=1&&T<=1000000) {
        while(T>=1){
            cin >> A >> B;
            if(A>=1 && A<=1000 && B>=1 && B<=1000){
                cout << A + B << "\n";
                T--;
            } else cout << "Error!";
        }
    } else { cout << "Error!"; return 0; }
    return 0;
}
