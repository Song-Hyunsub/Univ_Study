#include <iostream>
using namespace std;
int main(){
  int a[5] = {1, 2, 3, 4, 5};
  int na = sizeof(a) / sizeof(a[0]);  // 요소의 개수
  cout << "배열 a의 요소 개수는 " << na << "입니다." << endl;
  for(int i=0; i< na; i++){
    cout << "a[" << i << "] = " << a[i] << endl;
  }
  return 0;
}
