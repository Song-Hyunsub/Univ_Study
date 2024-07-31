// 1,000 이하의 소수 나열하기 (버전2)

#include <iostream>
using namespace std;
int main(){
  int prime[500];  // 소수를 저장하는 배열
  int ptr = 0;    // 이미 얻은 소수의 개수
  unsigned long counter = 0;    // 나눗셈 횟수
  prime[ptr++] = 2;    // 2는 소수입니다.
  for(int n=3; n<=1000; n+=2){  // 홀수만을 대상
    int i;
    for(i=1; i<ptr; i++){  // 이미 얻은 소수로 나눔
      counter++;
      if(n%prime[i]==0)  // 나누어 떨어지므로 소수가 아님
        break;   // 더 이상의 반복 불필요
    }
    if(ptr==i)  // 마지막까지 나누어떨어지지 않았다면
      prime[ptr++]=n;  // 배열에 저장
  }
  for(int i=0; i<ptr; i++)
    cout << prime[i] << endl;
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
나눗셈을 실행한 횟수: 14622
*/
