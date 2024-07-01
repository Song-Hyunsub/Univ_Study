#include <iostream>
/*
4 => long int
20 => long long long long long int 
*/

using namespace std;
int main(){
    int N, M;
    cin >> N;
    if(N>=4 && N<=1000 && N%4==0){
        for(int i=0; i<N/4; i++) cout << "long ";
        cout << "int";
    } else { 
        cout << "Error!"; return 0; 
    }
}
