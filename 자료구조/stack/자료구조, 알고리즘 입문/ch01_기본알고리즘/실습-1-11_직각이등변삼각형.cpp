#include <iostream>
using namespace std;
int main(){
  int n;
  do{
    cout << "몇 단 삼각형입니까?: ";
    cin >> n;
  } while(n<=0);
  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
