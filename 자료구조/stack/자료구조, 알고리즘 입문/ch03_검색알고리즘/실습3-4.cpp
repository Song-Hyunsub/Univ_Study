#include <iostream>
using namespace std;
int bin_search(const int a[], int n, int key)
{
  int pl = 0;
  int pr = n-1;
  do {
    int pc = (pl + pr) / 2;  // 검색 범위 한가운데의 인덱스
    if(a[pc]==key) return pc;  // 검색 성공
    else if(a[pc] < key) pl = pc + 1;  // 검색 범위를 뒤쪽 절반으로 좁힘
    else pr = pc - 1;  // 검색 범위를 앞쪽 절반으로 좁힘
  } while(pl <= pr);
  return -1;  // 검색 실패
}

int main() {
  int nx, ky;
  cout << "이진 검색" << endl;
  cout << "요소 개수: ";  cin >> nx;
  int* x = new int[nx];
  cout << "오름차순으로 입력하세요." << endl;
  cout << "x[0]: ";  cin >> x[0];
  for(int i=1; i<nx; i++) {
    do {
      cout << "x[" << i << "]: ";
      cin >> x[i];
    } while(x[i] < x[i-1]);
  }
  cout << "검색값: ";
  cin >> ky;
  int idx = bin_search(x, nx, ky);
  if(idx == -1) cout << "검색에 실패했습니다.";
  else cout << ky << "는 x[" << idx << "]에 있습니다." << endl;
  delete[] x;
  return 0;
}

/*
이진 검색
요소 개수: 7
오름차순으로 입력하세요.
x[0]: 15
x[1]: 27
x[2]: 39
x[3]: 77
x[4]: 92
x[5]: 118
x[6]: 121
검색값: 39
39는 x[2]에 있습니다.
*/
