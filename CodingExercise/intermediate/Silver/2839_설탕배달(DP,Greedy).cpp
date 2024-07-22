/*
N
-3? -5?

int N, result = 0;
0) while(n>=0)
1) N % 5 == 0 일 때, 결과에 N / 5를 더해주고 출력하여 종료
2) 그렇지 않으면 N -= 3; 결과++;을 계속 진행
3) n이 0보다 작게 될 시에, 바로 탈출하여 -1 출력

*/

/* [Solution 1]
#include <iostream>
using namespace std;

// 최대 5000kg까지의 설탕을 나르기 위해 dp 배열을 선언
// 전역 변수이기 때문에 자동으로 0으로 초기화
int dp[5001]; 

int main() {
    int n;
    cin >> n; // 설탕의 무게를 입력받음

    // 3kg와 5kg를 만드는 가장 최소의 봉지 수는 각각 1
    // 따라서 dp[3]과 dp[5]는 무조건 1로 초기화
    dp[3] = dp[5] = 1; 

    // 6부터 n까지의 모든 무게에 대해 dp 값을 계산
    for (int i = 6; i <= n; i++) {
        // 만약 (i-3) kg을 나르는 방법이 존재하면, 
        // (i-3) kg을 나르는 최소 봉지 수 + 1을 dp[i]에 저장
        if (dp[i - 3]) dp[i] = dp[i - 3] + 1;

        // 만약 (i-5) kg을 나르는 방법이 존재하면,
        // 현재 dp[i] 값과 (i-5) kg을 나르는 최소 봉지 수 + 1을 비교하여
        // 더 작은 값을 dp[i]에 저장
        // 만약 dp[i]가 아직 업데이트되지 않았으면 (즉, dp[i]가 0이면)
        // dp[i] = dp[i-5] + 1로 설정
        if (dp[i - 5]) dp[i] = dp[i] ? min(dp[i], dp[i - 5] + 1) : dp[i - 5] + 1;
    }

    // n kg을 정확히 나르는 방법이 없으면 -1을 출력
    // 그렇지 않으면 dp[n] 값을 출력
    cout << (dp[n] == 0 ? -1 : dp[n]) << endl;

    return 0;
}
*/

// [Solution 2]
#include <iostream>
using namespace std;
int main(){
    int N, result = 0;
    cin >> N;
    int count = 0;
    while(N>=0){
        if(N % 5 == 0){
            result += N/5;
            cout << result << endl;
            return 0;
        }
        N-=3;
        result++;
    }
    cout << -1 << endl;
}
