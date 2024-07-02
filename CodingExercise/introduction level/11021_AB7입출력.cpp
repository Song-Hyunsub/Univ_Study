/*
"Case #x: "
*/

#include <iostream>
using namespace std;
int main(){
    int T, A, B;
    int x=1;
    cin >> T;
    if(T>0){
        while(T>=1){
            cin >> A >> B;
            if(A>0&&A<10&&B>0&&B<10){
                cout << "Case #" << x <<": " << A+B << "\n";
                T--;
                x++;
            } else cout << "Error!";
        }
    } else { cout << "Error!"; return 0; }
    return 0;
}
