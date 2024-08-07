/*
n=1 => 2*1 => 1
n=2 => (1*2)2개, (2*1)2개, (2*2)1개 => 3
n=3 => ((1*2)2개 + (2*1)1개) * 2, (2*1)3개, (2*2사용)2개 => 7
맨 왼쪽에 1*2 타일을 하나 세로로 놓은 경우 => dp[n-1]
맨 왼쪽에 2*1 타일 두 개 세로로 놓은 경우 => dp[n-2]
맨 왼쪽에 2*2 타일 하나 놓은 경우 => dp[n-2]
*/

#include <iostream>
using namespace std;

int countWaysToTile(int n) {
    if (n == 1) return 1;
    if (n == 2) return 3;
    
    const int MOD = 10007;
    int dp[n + 1];
    
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;
    
    for (int i = 3; i <= n; ++i) {
        dp[i] = (dp[i-1] + 2 * dp[i-2]) % MOD;
    }
    
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << countWaysToTile(n) << endl;
    return 0;
}
