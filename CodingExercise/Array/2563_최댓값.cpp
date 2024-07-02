#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N=9;
    int num;
    vector<int> A(N);
    for(int i=0; i<N; i++){
       cin >> A[i]; 
        if(A[i]<1||A[i]>=100){
            cout << "Error!";
            return 0;
        }
    }
    int max = A[0];
    int min = A[0];
    num = 1;
    for (int i=1; i<N; i++){
        if(A[i]>max) {
            max = A[i];
            num = i+1;
        }        
    }
    cout << max << "\n" << num;
    return 0;
}
