// 연습3-2 선형검색(버전 1: 탐색 과정을 출력)
#include <iostream>
#include <iomanip>

using namespace std;

/*--- 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색 ---*/
int search(const int a[], int n, int key)
{
    cout << "   |";
    for (int i = 0; i < n; i++)
        cout << setw(3) << i;
    cout << "\n---+";
    for (int i = 0; i < n; i++)
        cout << "---";
    cout << "--\n";

    for (int i = 0; i < n; i++) {
        cout << "   |  ";
        cout << setw(3 * (i - 1) + 5) << "*\n";
        cout << setw(3) << i << "|";
        for (int j = 0; j < n; j++)
            cout << setw(3) << a[j];
        cout << '\n';

        if (a[i] == key)
            return i;           // 검색 성공

        cout << "   |\n";
    }

    return -1;                  // 검색 실패
}

int main(void)
{
    int nx, ky;

    cout << "선형 검색" << endl;
    cout << "요소 개수: ";
    cin >> nx;
    int *x = new int[nx + 1];   // 요소의 개수가 (nx + 1)인 int형 배열 x를 생성

    for (int i = 0; i < nx; i++) {          // 주의: 값을 읽은 것은 nx개
        cout << "x[" << i << "] : ";
        cin >> x[i];
    }
    cout << "검색값: ";
    cin >> ky;

    int idx = search(x, nx, ky);            // 배열 x에서 값이 ky인 요소를 선형 검색

    if (idx == -1)
        cout << "검색에 실패했습니다." << endl;
    else
        cout << ky << "는(은) x[" << idx << "]에 있습니다." << endl;

    delete[] x;                             // 배열 x를 해제

    return 0;
}

/*
선형 검색
요소 개수: 7
x[0] : 1
x[1] : 2
x[2] : 3
x[3] : 4
x[4] : 5
x[5] : 6
x[6] : 7
검색값: 3   
   |  0  1  2  3  4  5  6
---+-----------------------
   |  *
  0|  1  2  3  4  5  6  7
   |
   |     *
  1|  1  2  3  4  5  6  7
   |
   |        *
  2|  1  2  3  4  5  6  7
3는(은) x[2]에 있습니다.

*/
