#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "정사각형을 출력합니다." << endl;
  cout << "입력할 수: ";  cin >> n;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
