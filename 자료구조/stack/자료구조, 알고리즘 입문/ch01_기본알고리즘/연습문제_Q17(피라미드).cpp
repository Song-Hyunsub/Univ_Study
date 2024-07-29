/* n단의 피라미드 출력 함수
n=4
    *      " " * 4 + "*" * 1
   ***     " " * 3 + "*" * 3
  *****    " " * 2 + "*" * 5
 *******   " " * 1 + "*" * 7
*********  " " * 0 + "*" * 9
=> " " * (n-i) + "*" * (2*i + 1)  (i=0~4)
  for(int i=0; i<n; i++){
    for(int j=n-i-1; j>0; j--){
      cout << " ";
    }
    // 1, 3, 5, 7, 9, ... 2n+1
    for(int j=1; j<=2*i+1; j+=1){
     cout << "*";
    }
    cout << endl;
  }

*/
#include <iostream>
using namespace std;
void spira(int n){
  for(int i=0; i<n; i++){
    for(int j=n-i-1; j>0; j--){
      cout << " ";
    }
    // 1, 3, 5, 7, 9, ... 2n+1
    for(int j=1; j<=2*i+1; j+=1){
     cout << "*";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  spira(n);
  return 0;
}
