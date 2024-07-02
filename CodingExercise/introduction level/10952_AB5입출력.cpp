#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B;
    while(1){
        cin >> A >> B; 
        if(A>=0 && A<10 && B>=0 && B<10){ 
            if(A==0 && B==0) break;
            cout << A + B << '\n';
        } else cout << "Error!";
    }
    return 0;
}
