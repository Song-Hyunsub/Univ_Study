#include <iostream>
using namespace std;
// 왼쪽 아래가 직각인 이등변삼각형 출력
void triangleLB(int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      cout << "*";
    }
    cout << endl;
  }
}
// 오른쪽 위가 직각인 이등변삼각형 출력
void triangleLU(int n){
  for(int i=n; i>0; i--){
    for(int j=i; j>0; j--){
      cout << "*";
    }
    cout << endl;
  }
}
// 오른쪽 아래가 직각인 이등변삼각형 출력
void triangleRB(int n){
  for(int i=0; i<n; i++){
    for(int j=n-1; j>i; j--){
      cout << " ";
    }
    for(int j=0; j<i+1; j++){
      cout << "*";
    }

    cout << endl;
  }
}
// 오른쪽 위가 직각인 이등변삼각형 출력
void triangleRU(int n){

  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
      cout << " ";
    }
    for(int j=n-i; j>0; j--){
      cout << "*";
    }
    cout << endl;
  }
}
int main(){
    int n;
  do{
    cout << "몇 단 삼각형입니까?: ";
    cin >> n;
  } while(n<=0);
    triangleLB(n);
    triangleLU(n);
    triangleRB(n);
    triangleRU(n);
  return 0;
}
