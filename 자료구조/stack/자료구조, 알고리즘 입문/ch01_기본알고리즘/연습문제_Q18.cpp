/* n단의 피라미드 출력 함수
n=4
1111111      " " * 0 + "*" * 7
 22222       " " * 1 + "*" * 5
  333        " " * 2 + "*" * 3
   4         " " * 3 + "*" * 1
=> " " * (n-i) + (i+1) * (2*n - 1 - 2*i)  (i=0~4)
*/

#include <iostream>
using namespace std;
void nrpira(int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
      cout << " ";
    }
    for(int j=2*n-2*i-1; j>0; j-=1){
     cout << i+1;
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  nrpira(n);
  return 0;
}
