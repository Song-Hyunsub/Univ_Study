/*
한 번에 한 칸 또는 두 칸
연속된 3계단 모두 밟으면 X (단, 시작점은 가능)
마지막 도착 계단 N번째를 반드시 밟아야
i번째 계단을 밟을 수 있는 경우:
두 계단 전에 오는 경우 => dp[i-2]+score[i]
세 계단 전을 밟고 그 뒤에 한 계단 전을 밟는 경우 => dp[i-3]+score[i-1]+score[i]
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    int score[301];
    int dp[301];
    for(int i=0; i<N; i++){
        cin >> score[i];
    }
    dp[0] = score[0];
    dp[1] = score[0] + score[1];
    dp[2] = max(score[0]+score[2], score[1]+score[2]);
    for(int i=3; i<N; i++){
        dp[i] = max(dp[i-2]+score[i], dp[i-3]+score[i-1]+score[i]);
    }
    cout << dp[N-1] << endl;
    return 0;
}
