#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    vector<int> coins(N);
    for(int i=0; i<N; i++){
        cin >> coins[i];
    }
    int count=0;
    for(int i=N; i>0; i--){
        if(coins[i-1] <= K){        // 전체 금액이 동전 가격보다 작아지기 전까지 시행
            count += K / coins[i-1];    // 전체 금액을 해당 동전 금액만큼의 몫을 count에 더해줌
            K %= coins[i-1];     // 전체 금액에서 나머지만 남긴다
        }
    }
    cout << count << endl;
}
