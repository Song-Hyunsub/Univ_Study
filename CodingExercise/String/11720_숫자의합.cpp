/*
N개의 숫자가 공백 없이 쓰여진다. 이 숫자를 모두 합해서 출력하는 프로그램
(1<=N<=100)
isdigit(ch) => ch가 0~9인 숫자이면 1, 아니면 0을 반환하는 함수
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int sum = 0;
    cin >> N;
    if(N>=1 && N<=100){
        string s;
        cin >> s;
        for(char ch : s){
            if(isdigit(ch)){
                sum += ch - '0';
            } else {
                cout << "Error!";
                return 0;
            }
        }
        cout << sum;
    } else cout << "Error!";
    return 0;
}
