#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    if(N>=1 && N<=100 && M>=1 && M<=100){
        int i, j;
        vector<int> v(N+1);
        for(int idx = 1; idx <= N; idx++) {// 각 바구니에 자신의 번호를 넣음
            v[idx] = idx;
        }
        for(int k=1; k<=M; k++){
            cin >> i >> j;
            if(1<=i && i<=j && j<=N){
                int temp=v[i];
                v[i] = v[j];
                v[j] = temp;
            } else {
                cout << "Error!";
                return 0;
            }
        }
        for(int m=1; m<=N; m++){
            cout << v[m] << " ";
        }
    } else cout << "Error!";
    return 0;
}
