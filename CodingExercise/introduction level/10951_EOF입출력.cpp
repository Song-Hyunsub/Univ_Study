#include <iostream>
using namespace std;

/* [Solution 1]
int main(){
    int A, B;
    while(1){
        cin >> A >> B;
        if(A>0 && A<10 && B>0 && B<10) {
            if(cin.eof()) {
               cout << A+B << endl;
               break; 
            } 
            else cout << A+B << endl;
        } else { cout << "Error!"; return 0; }
    }
    return 0;
}
*/

// [Solution 2]
int main(){
    int A, B;
    while(cin >> A >> B){
        if(A>0 && A<10 && B>0 && B<10){
            cout << A+B <<endl;
        } else { cout << "Error!"; return 0; }
    }
    return 0;
}
