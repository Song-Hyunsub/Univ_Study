/*
1~10까지의 합  => (1+10) * 5
1~n까지의 합 => (1+n) * (n/2)
*/

#include <iostream>
using namespace std;
int main(){
  int n;  cin >> n;
  int sum=0;
  sum = (n+1) * n / 2;
  cout << sum << endl;
  return 0;
}
