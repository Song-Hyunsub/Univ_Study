/*
소수 찾기) 2 3 5 7 11 13 17 19 23 29
int q=0;
for(int j=1; j<arr[i]; j++){
    if(arr[i]%j==0) q++;
}

*/

#include <iostream>
using namespace std;
int main(){
    int N, p=0, q=0;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
        for(int j=1; j<=arr[i]; j++){
            if(arr[i]%j==0) q++;
        }
        if(q==2) p++; 
        q=0;
    }
    cout << p << "\n";
    return 0;
}
