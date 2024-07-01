#include <iostream>
using namespace std;
/*
X : 영수증에 적힌 총 금액
N : 구매한 물건의 종류의 수
a : 물건의 가격
b : 물건의 개수
*/
int main(){
    int X, N, a, b;
    int sum = 0;
    cin >> X;
    cin >> N;
    if(X>=1 && X<=1000000000 && N>=1 && N<=100)
    {
        while(N>=1){
            cin >> a >> b;
            if(a>=1 && a<=1000000 && b>=1 && b<=10) {
                sum += a * b;
                N--;
            } else { cout <<"Error!"; return 0; }
        }
        if(sum==X) cout << "Yes";
        else cout << "No";
    } else cout <<"Error!";
    return 0;
}
