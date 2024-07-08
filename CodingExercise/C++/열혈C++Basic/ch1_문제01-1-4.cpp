/*
ch1_문제01-1-4.cpp
조건) 이 회사는 모든 판매원에 매달 50만원 기본 급여, 물품 판매 가격의 12%에 해당하는 돈 지급
민수 => 판매 100만원 => 50 + 100 * 0.12 = 62 => 62만을 급여로 지급
실행 예시)
판매 금액을 만원 단위로 입력(-1 to end): 100
이번 달 급여: 62만원
판매 금액을 만원 단위로 입력(-1 to end): 200
이번 달 급여: 74만원
판매 금액을 만원 단위로 입력(-1 to end): -1
프로그램을 종료합니다.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    while(1){
        cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        cin >> num;
        if(num==-1) {
            cout << "\n프로그램을 종료합니다." << endl; 
            break;
        } else {
            cout << "\n이번 달 급여: " << 50 + num * 0.12 << endl;
        }
    }
    return 0;
}
