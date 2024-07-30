#include <iostream>
using namespace std;
#define N 5
int main(){
  int a[N];
  for(int i=0; i<N; i++){
    cout << "a[" << i << "]: ";
    cin >> a[i];
  }
  cout << "각 요소의 값" << endl;
  for(int i=0; i<N; i++){
    cout << "a[" << i << "] = " << a[i] << endl;
  }
  return 0;
}
