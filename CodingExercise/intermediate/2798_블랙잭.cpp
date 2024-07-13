#include <iostream>
using namespace std;
int main(){
    int N, M, total, p=0;
    cin >> N >> M;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){
                total = arr[i]+arr[j]+arr[k];
                if(total > M){
                    continue;
                }
                if(p < total){
                    p = total;
                
                }
            }
        }
    }
    cout << p;
    return 0;
}
