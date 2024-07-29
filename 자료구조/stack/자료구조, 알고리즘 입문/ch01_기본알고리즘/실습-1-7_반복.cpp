/*
1부터 n까지의 총합을 구합니다.
n값: 5
1부터 5까지의 총합은 15입니다.
*/

#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "1부터 n까지의 총합을 구합니다." << endl;
  cout << "n값: ";  cin >> n;
  int sum=0;
  int i=1;
  while(i<=n){
    sum += i;
    i++;
  }
  cout << "1부터 " << n << "까지의 총합은";
  cout << sum << "입니다." << endl;
  return 0;
}
