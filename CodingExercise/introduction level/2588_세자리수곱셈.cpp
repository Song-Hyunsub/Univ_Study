#include <iostream>
using namespace std;

// 세 자리수 * 세 자리수
/*
입력 예제)
472
385

출력 예제)
2360    // 472 * 5
3776    // 472 * 8
1416    // 472 * 3
181720  // 위 세 개의 수를 모두 더한 값
*/

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int c1 = a * (b%10);
    int c2 = (a * (b%100 - b%10))/10;
    int c3 = a * (b/100);
    if(a>=100 && a<1000 && b>=100 && b<1000){
        cout << c1 << "\n";
        cout << c2 << "\n";
        cout << c3 << "\n";
        cout << c3*100 + c2*10 + c1 << endl;
    } else { cout << "Error!" << endl; }
    return 0;
}
