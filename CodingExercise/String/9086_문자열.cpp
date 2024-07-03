/*
Testcase의 개수 입력받기 : N => int N; cin >> N;
문자열 정의하기 : string str = "";
N번만큼 문자열을 입력받기 => for(int i=0; i<N; i++){ cin >> str; }
각 입력받은 문자열에서 첫 글자와 마지막 글자 출력 => for(...) {cout << str.front << str.back;} 
*/

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    string str = "";
    for(int i=0; i<N; i++){
        cin >> str; 
        cout << str.front() << str.back() << "\n";
    }
    return 0;
}
