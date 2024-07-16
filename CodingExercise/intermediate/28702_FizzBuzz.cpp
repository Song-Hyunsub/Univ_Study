/*
i 15의 배수 => FizzBuzz
i 3배수 O 5배수 X => Fizz
i 3배수 X 5배수 O => Buzz
i 3배수 X 5배수 X => i
FizzBuzz문제에서 연속 출력된 세 개의 문자열이 주어질 때,
이 세 문자열 다음에 올 문자열을 구하시오
int n1, n2, n3;
*/

#include <iostream>
using namespace std;

int main(){
    string n1, n2, n3;
    int result;
    cin >> n1 >> n2 >> n3;
    if(n1[0]>=48 && n1[0]<=57){
        result = stoi(n1) + 3;
        if(result %5==0){
            cout << "Buzz" << "\n";
        } else cout << result << "\n";
    } else if(n2[0]>=48 && n2[0]<=57){        // 문자열 n2의 첫 글자가 숫자인지 확인
        result = stoi(n2) + 2;                // 문자열 n2를 숫자로 변환
        if(result%3==0 && result%5==0){
            cout << "FizzBuzz" << "\n";
        } else if(result%3==0 && result%5!=0){
            cout << "Fizz" << "\n";
        } else if(result%3!=0 && result%5==0){
            cout << "Buzz" << "\n";
        } else cout << result << "\n";
    } else if(n3[0]>=48 && n3[0]<=57){
        result = stoi(n3) + 1;
        if(result%3==0 && result%5==0){
            cout << "FizzBuzz" << "\n";
        } else if(result%3==0 && result%5!=0){
            cout << "Fizz" << "\n";
        } else if(result%3!=0 && result%5==0){
            cout << "Buzz" << "\n";
        } else cout << result << "\n";
    } 
    return 0;
}
