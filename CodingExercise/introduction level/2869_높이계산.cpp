/*
첫날 제외 거리: V-A
하루 올라가는 순수 거리: A-B
전체 거리 계산 (V-A + A-B -1) / (A - B) + 1 = (V-B-1) / (A-B) + 1
*/

#include <iostream>
using namespace std;
int main(){
    int A, B, V;
    cin >> A >> B >> V;
    int d = (V - B - 1) / (A - B) + 1;
    cout << d << "\n";
    return 0;
}
