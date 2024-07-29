/*
출력 결과 예시)
1 + 2 + 3 + 4 + 5 = 15
*/

#include <iostream>
using namespace std;
int main(){
  int n;  cin >> n;
  int sum = 0;
  for(int i=1; i<=n; i++){
    if(i==n) cout << i;
    else cout << i << " + ";
    sum += i;
  }
  cout << " = " << sum;
  return 0;
}
