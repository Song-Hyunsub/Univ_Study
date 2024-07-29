#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "1부터 n까지의 총합을 구합니다." << endl;
  cout << "n값: ";  cin >> n;
  int sum=0;
  for(int i=0; i<n; i++){
    sum += i+1;
  }
  cout << "1부터 " << n << "까지의 총합은 ";
  cout << sum << "입니다." << endl;
  return 0;
}
