/*

    *
   **
  ***
 ****
*****

*/


#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    if(N>=1 && N<=100){
        for(int i=0; i<N; i++){
            cout.width(N-i);
            for(int j=0; j<=i; j++){
                cout << std::right << "*";
            }
            cout << "\n";
        }
    } else cout << "Error!";
    return 0;
}
