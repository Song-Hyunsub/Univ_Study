#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "1부터 n까지의 총합을 구합니다." << endl;
  do {
    cout << "n값: ";
    cin >> n;
  } while(n<=0);
  int sum=0;
  for(int i=1; i<=n; i++){
    sum += i;
  }
  cout << "1부터 " << n << "까지의 총합은 " << sum << "입니다." << endl;
  return 0;
}
