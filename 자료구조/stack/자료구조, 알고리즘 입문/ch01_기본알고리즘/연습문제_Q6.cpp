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
  cout << "while문 빠져나온 후 i의 값: " << i << endl;
  cout << "1부터 " << n << "까지의 총합은 ";
  cout << sum << "입니다." << endl;
  return 0;
}

/*
1부터 n까지의 총합을 구합니다.
n값: 6
while문 빠져나온 후 i의 값: 7
1부터 6까지의 총합은 21입니다.
*/
