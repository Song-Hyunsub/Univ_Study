/*
P(1) = 1
P(2) = 1
P(3) = 1
P(4) = 2
P(5) = 2
P(6) = 3 = P(1) + P(5)
P(7) = 4 = P(2) + P(6)
...
P(N) = P(N-5) + P(N-1)
*/

#include <iostream>
#include <vector>
using namespace std;

long long get_pado(int n){
    vector<long long> P(max(n, 5)+1 ,0);
    P[1]=1;  P[2]=1;  P[3]=1;  P[4]=2;  P[5]=2;
    for(int i=6; i<=n; i++){
        P[i] = P[i-5] + P[i-1];
    }
    return P[n];
}
int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int a;
        cin >> a;
        cout << get_pado(a) << endl;
    }
    return 0;
}
