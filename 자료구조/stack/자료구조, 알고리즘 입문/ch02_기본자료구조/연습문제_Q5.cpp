#include <iostream>
using namespace std;

#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

void ary_reverse(int a[], int n)  // 요소 개수가 n인 배열 a의 요소를 역순으로 정렬
{
  for(int i=0; i < n / 2; i++){
    for(int j=0; j<n; j++)
      cout << a[j] << " ";
    cout << "\na[" << i << "]와 a[" << n-i-1 << "]를 교환합니다." << endl;
    swap(int, a[i], a[n-i-1]);
  }
}

int main(){
  int nx;
  cout << "요소 개수: ";
  cin >> nx;
  int* x = new int[nx];
  for(int i=0; i < nx; i++){
    cout << "x[" << i << "]: ";
    cin >> x[i];
  }
  ary_reverse(x, nx);
  for(int i=0; i < nx; i++) {
    cout << x[i] << " "; 
  }
  cout << "\n역순 정렬을 종료합니다." << endl;

  delete[] x;
  return 0;
}

/*
1 2 3 4 5 
a[0]와 a[4]를 교환합니다.
5 2 3 4 1 
a[1]와 a[3]를 교환합니다.
5 4 3 2 1 
역순 정렬을 종료합니다.
*/
