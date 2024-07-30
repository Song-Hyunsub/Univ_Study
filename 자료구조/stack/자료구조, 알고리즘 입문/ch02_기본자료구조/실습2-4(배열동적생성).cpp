#include <iostream>
using namespace std;
int main(){
  int na;
  cout << "요소 개수: ";
  cin >> na;
  int* a = new int[na];
  if(a==NULL)
    cout << "메모리 확보에 실패했습니다." << endl;
  else {
    cout << na << "개의 정수를 입력하세요." << endl;
    for(int i=0; i<na; i++){
      cout << "a[" << i << "]: ";
      cin >> a[i];
    }
    cout << "각 요솟값은 아래와 같습니다.\n"
    for(int i=0; i<na; i++){
      cout << "a[" << i << "]: " << a[i] << endl;
    }
    delete[] a;
  } 
  
  return 0;
}

/*
요소 개수: 5개의 정수를 입력하세요.
a[0]: 1
a[1]: 7
a[2]: 2
a[3]: 4
a[4]: 6
각 요솟값은 아래와 같습니다.
a[0]: 1
a[1]: 7
a[2]: 2
a[3]: 4
a[4]: 6
*/
