/*
단어에 포함되지 않은 알파벳 : -1 출력
단어에 포함된 알파벳 : 알파벳이 입력된 순서대로 인덱스 번호를 출력한다.
s.find(n) => 문자열 s에서 문자 n이 최초로 등장하는 인덱스 번호를 반환함
찾는 문자열이 없을 경우 string::npos를 반환한다.
npos의 값은 -1이지만 자료형이 unsigned이므로 int로 캐스팅 후 출력한다.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int c[26] = {0,};
    string s;
    cin >> s;
    for(char i='a'; i<='z'; i++){
        cout << (int)s.find(i) << ' ';   
    }
    return 0;
}
