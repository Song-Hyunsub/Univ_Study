#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int digit = 0;
  while(n>0){
    digit++;
    n /= 10;
  }
  cout << "그 수는 " << digit << "자리입니다." << endl;
}
