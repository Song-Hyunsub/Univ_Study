#include <iostream>
#include <vector>
using namespace std;

int count_ways(int n){
    // dp 배열 초기화 (0부터 10까지 계산 가능하도록)
    vector<int> dp(n + 1, 0);
    
    // 기본 초기값 설정
    dp[0] = 1;
    if (n >= 1) dp[1] = 1;
    if (n >= 2) dp[2] = 2;
    if (n >= 3) dp[3] = 4;
    
    // dp 점화식 적용
    for(int i=4; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
     return dp[n];
}

int main(){
    // 입력 처리
    int T;  cin >> T;
    vector<int> result(T);
    for(int i=0; i<T; i++){
        int n;
        cin >> n;
        result[i] = count_ways(n);
    }
    // 결과 출력
    for(int i=0; i<T; i++){
        cout << result[i] << endl;
    }
}
