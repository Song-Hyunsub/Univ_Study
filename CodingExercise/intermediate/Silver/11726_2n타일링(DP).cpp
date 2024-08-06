/*
n=1 => 1
n=2 => 2
n=3 => 1 + 2 = 3
n=4 => 2 + 3 = 5
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1);
    dp[1] = 1;
    if(n>=2){
        dp[2] = 2;
    }
    for(int i=3; i<=n; i++){
        dp[i] = (dp[i-1] + dp[i-2])%10007;
    }
    cout << dp[n]%10007 << endl;
    return 0;
}
