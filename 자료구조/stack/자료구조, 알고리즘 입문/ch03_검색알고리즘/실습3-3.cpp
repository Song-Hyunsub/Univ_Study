// 선형 검색(보초법)
#include <iostream>
using namespace std;
// 요소의 개수가 n인 배열에서 key와 일치하는 요소를 선형 검색(보초법)
int search(int a[], int n, int key){
  int i = 0;
  a[n] = key;  // 보초를 추가 (가상의 값)
  while(1){
    if(a[i]==key) break;
    i++;
  }
  return i==n ? -1 : i;  // 검색을 실패할 시 -1, 검색에 성공할 시 i를 반환
}

int main()
{
  int nx, ky;
  cout << "선형 검색" << endl;
  cout << "요소 개수: ";
  cin >> nx;
  int* x = new int[nx];  // 요소의 개수가 nx인 int형 배열 x를 생성
  for(int i=0; i<nx; i++) {
    cout << "x[" << i << "]: ";
    cin >> x[i];
  }
  cout << "검색값: ";
  cin >> ky;
  int idx = search(x, nx, ky);  // 배열 x의 값이 ky인 요소를 선형 검색
  if(idx == -1) cout << "검색에 실패했습니다." << endl;
  else cout << ky << "(은)는 x[" << idx << "]에 있습니다." << endl;
  delete[] x;
  return 0;
}

/*
선형 검색
요소 개수: 7
x[0]: 6
x[1]: 4
x[2]: 3
x[3]: 2
x[4]: 1
x[5]: 2
x[6]: 8
검색값: 2
2(은)는 x[3]에 있습니다.
*/
