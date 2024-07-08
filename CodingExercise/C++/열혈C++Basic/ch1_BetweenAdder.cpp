/*
BetweenAdder.cpp
실행 결과)
두 개의 숫자 입력: 3 7
두 수 사이의 정수 합: 15

*/

#include <iostream>
using namespace std;

int main() {
    cout << "두 개의 숫자 입력: ";
    int num1, num2, sum=0;
    cin >> num1 >> num2;
    for(int i = num1+1; i<num2; i++){
        sum += i;
    }
    cout << "\n두 수 사이의 정수 합: " << sum << endl;
    return 0;
}
