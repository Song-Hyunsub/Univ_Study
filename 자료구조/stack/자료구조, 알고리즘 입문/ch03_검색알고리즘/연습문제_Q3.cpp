#include <iostream>
using namespace std;

// 배열 a 안의 값이 key인 모든 요소의 임덱스를 idx에 저장
int search_idx(const int a[], int n, int key, int idx[]){
  int count = 0;
  for(int i=0; i<n; i++){
    if(a[i]==key) idx[count++] = i;
  }
  return count;
}

int main(){
  int nx, ky;
  cout << "선형 검색(모든 요소를 검색)" << endl;
  cout << "요소 개수: ";
  cin >> nx;
  int* x = new int[nx];  // 요소 개수가 nx인 int형 배열 x를 생성
  int* idx = new int[nx];  // 요소 개수가 nx인 int형 배열 idx를 생성
  for (int i=0; i<nx; i++) {
    cout << "x[" << i << "] : ";
    cin >> x[i];
  }
  cout << "검색값 : ";
  cin >> ky;
  int no = search_idx(x, nx, ky, idx);  // 배열 x에서 값이 ky인 모든 요소를 선형 탐색

  if (no == -1)
    cout << "일치하는 요소가 없습니다." << endl;
  else {
    cout << "일치하는 요소는 다음과 같이 " << no << "개입니다." << endl;
    for (int i=0; i<no; i++) {
      cout << "x[" << idx[i] << "] ";
    }
    cout << endl;
  }
  delete[] x;
  delete[] idx;
  return 0;
}

/*
선형 검색(모든 요소를 검색)
요소 개수: 8
x[0] : 1
x[1] : 9
x[2] : 2
x[3] : 9
x[4] : 4
x[5] : 6
x[6] : 7
x[7] : 9
검색값 : 9
일치하는 요소는 다음과 같이 3개입니다.
x[1] x[3] x[7] 
*/
