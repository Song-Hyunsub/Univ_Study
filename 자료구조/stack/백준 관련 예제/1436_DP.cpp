/*
dp 사용
(1) 초기값 설정: dp[1] = 0
추가적인 연산이 필요하지 않음
(2) 점화식 구성:
dp[i]는 다음 세 가지 방법을 통해 i-1, i/2, i/3 상태에서의 연산 횟수 중 최소값을 이용하여 구할 수 있다.
만약 i가 3으로 나누어 떨어진다면: dp[i] = dp[i // 3] + 1
만약 i가 2로 나누어 떨어진다면: dp[i] = dp[i // 2] + 1
1을 빼는 경우: dp[i] = dp[i - 1] + 1
위 세 가지 방법 중 최소값을 dp[i]에 저장합니다.

dp[i] = min(dp[i], dp[i / 2] + 1);에서 min 함수를 사용하는 이유는 각 i에 대해 최소 연산 횟수를 찾기 위해서입니다.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int make_one(int N){
    vector<int> dp(N+1, 0);
    for(int i=2; i<=N; i++){
        dp[i] = dp[i-1] + 1;
        if(i%2==0){
            dp[i] = min(dp[i],  dp[i / 2] + 1);
        }
        if(i%3==0){
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }
    return dp[N];
}
int main() {
    int N;
    cin >> N;
    cout << make_one(N) << endl;
    return 0;
}
