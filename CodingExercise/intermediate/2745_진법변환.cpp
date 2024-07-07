#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int B, sum = 0;
    cin >> str >> B;
    int len = str.length();
    
    // 각 자리의 값을 처리
    for(int i = 0; i < len; i++) {
        // 문자에서 숫자 값으로 변환
        int digit;
        if (str[i] >= '0' && str[i] <= '9') {
            digit = str[i] - '0';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            digit = str[i] - 'A' + 10;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            digit = str[i] - 'a' + 10;
        } else {
            cerr << "Invalid character in input" << endl;
            return 1;
        }

        // 자리값을 더함 (진법 변환 로직)
        sum = sum * B + digit;
    }

    cout << sum << endl;
    return 0;
}
