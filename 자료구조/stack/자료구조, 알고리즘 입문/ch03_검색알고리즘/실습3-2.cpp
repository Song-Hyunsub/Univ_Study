// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색(for문)

int search(const int a[], int n, int key)
{
  for(int i=0; i<n; i++){
    if(a[i]==key) return i;
  }
  return -1;
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
