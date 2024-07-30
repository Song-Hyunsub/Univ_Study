#include <iostream>
using namespace std;

#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

void ary_reverse(int a[], int n)  // 요소 개수가 n인 배열 a의 요소를 역순으로 정렬
{
  for(int i=0; i < n / 2; i++)
    swap(int, a[i], a[n-i-1]);
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
  cout << "배열의 요소를 역순으로 정렬했습니다." << endl;
  for(int i=0; i < nx; i++) {
    cout << "x[" << i << "] = " << x[i] << endl; 
  }
  delete[] x;
  return 0;
}

/*
요소 개수: 7
x[0]: 2
x[1]: 5
x[2]: 1
x[3]: 3
x[4]: 9
x[5]: 6
x[6]: 7
배열의 요소를 역순으로 정렬했습니다.
x[0] = 7
x[1] = 6
x[2] = 9
x[3] = 3
x[4] = 1
x[5] = 5
x[6] = 2
*/

/*
do-while(0)을 사용하는 이유???

(1) 블록 스코프 보장: 매크로 내의 변수(t)가 매크로가 사용된 블록 내에서만 유효하도록 보장합니다.
(2) 문법적 안전성: 여러 문장이 포함된 매크로를 한 문장으로 처리하게 하여, 매크로 사용 시 문법적 오류를 방지합니다.
따라서, do-while(0) 패턴은 매크로 정의에서 매우 유용하며, 매크로의 문법적 안전성을 높이는 데 사용됩니다.
*/
