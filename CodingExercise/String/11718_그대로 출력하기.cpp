/*
그대로 출력하려면?
while(getline(cin, line)) 을 이용하여, 
입력한대로 string을 받고 공백, 엔터를 자동으로 구분해줘야 한다.

*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string line;
    while (getline(cin, line)) {
        cout << line << '\n';
    }
    return 0;
}
