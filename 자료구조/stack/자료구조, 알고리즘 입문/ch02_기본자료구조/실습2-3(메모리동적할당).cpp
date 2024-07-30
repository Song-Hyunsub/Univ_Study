#include <iostream>
using namespace std;
int main(){
  int* x = new int[1];  // int형 포인터에 메모리 할당
  if(x==NULL){
    cout << "메모리 할당에 실패했습니다." << endl;
  } else {
      *x = 57;
      cout << "*x = " << *x << endl;  
      delete[] x;  // int형 포인터에 할당한 메모리 해제
  }
  return 0;
}
