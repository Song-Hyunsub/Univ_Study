/*
출력 예시)
a값 : 6
b값 : 6
a보다 큰 값을 입력하세요!
b값 : 8
b - a는 2입니다.
(단, 변수 b에 입력한 값이 a 이하면 변수 b값을 다시 입력하세요!)
*/

#include <iostream>
using namespace std;
int main(){
  int a, b;
  cout << "a값 : ";  cin >> a;
  cout << "b값 : ";  cin >> b;
  while(b<=a) {
    cout << "a보다 큰 값을 입력하세요!" << endl;
    cout << "b값 : ";
    cin >> b;
  }
  cout << "b - a는 " << b - a << "입니다." << endl;
  return 0;
}
