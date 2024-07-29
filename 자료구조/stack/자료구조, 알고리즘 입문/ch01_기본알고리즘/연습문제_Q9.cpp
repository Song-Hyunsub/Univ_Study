// 정수 a와 b를 포함하는 수와 그 사이의 수의 총합 구하기

#include <iostream>
using namespace std;
int main(){
  int a, b, max, min, sum=0;  cin >> a >> b;
  if(a>=b) {
    max=a;  min=b;
  }
  else{
    max=b; min=a;
  }
  /*
  int min = (a < b) ? a : b;
  int max = (a > b) ? a : b;
  */
  for(int i=min; i<=max; i++){
    sum += i;
  }
  cout << sum << endl;
}
