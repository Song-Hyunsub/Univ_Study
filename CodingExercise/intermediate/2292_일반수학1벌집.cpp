/*
1 : 1
2~7(6) : 2
8~19(12) : 3
20~37(18) : 4
38~61(24) : 5
*/

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int k=1, i=1;
    while(i<N){
        if (N==1) break;
        i+=6*k;
        k++;
    }
    cout << k << endl;
    return 0;
}
