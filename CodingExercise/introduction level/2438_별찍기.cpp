#include <iostream>
using namespace std;
/* [another soultion]
int main(){
    int N;
    int x=1;
    cin >> N;
    if(N>=1&&N<=100){
        while(N>=1){
            for(int i=0; i<x; i++){
                cout << "*" ;
            }
            cout << "\n";
            N--;
            x++;
        }
    } else cout << "Error!";
    return 0;
}
*/

int main(){
    int N;
    cin >> N;
    if(N>=1&&N<=100){
        for(int i=0; i<N; i++){
            for(int j=0; j<i+1; j++){
                cout << "*";
            }
            cout << "\n";
        }
    } else cout << "Error!";
    return 0;
}
