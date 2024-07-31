// 1,000 이하의 소수 나열하기 (버전1)

#include <iostream>
using namespace std;
int main(){
  unsigned long counter = 0;  // 나눗셈 횟수
  for(int n=2; n<=1000; n++) {
    int i;
    for(i=2; i<n; i++){
      counter++;
      if(n%i==0)
        break;
    }
    if(n==i)
      cout << n << endl;
  }
  cout << "나눗셈을 실행한 횟수: " << counter << endl;
  return 0;
}

/*
2
3
5
7
...
977
983
991
997
나눗셈을 실행한 횟수: 78022
*/
