/*
출력) 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다.
이때, 대문자와 소문자를 같은 취급을 하여 개수를 세어야 함.
구상하기)
1) 문자열 초기화 및 입력받기, 벡터 배열의 초기화
2) 입력받은 문자열을 처음부터 ASCII 코드로 배열의 인덱스를 부여받기
단, 소문자에 해당하는 문자열은 모두 대문자로 이동시킨다 (+32 or toupper())
3) 부여받은 배열의 인덱스에 해당하는 원소에
4) 원소의 값이 가장 큰 값을 찾는다.
그 값이 유일하면 해당 문자열을 출력하고,
가장 큰 값을 가진 원소의 인덱스가 두 개 이상 있다면 ?을 출력한다.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s; int N = 200;
    int max=0; int p=0;
    char result = '?';
    vector<int> count(N, 0);
    cin >> s;
    for(int i=0; i<s.size(); i++){
        char ch = toupper(s[i]);
        count[ch - 'A']++; // A의 ASCII 코드 값인 65를 빼서 0-25의 인덱스로 변환
    }
    for(int j=0; j<26; j++){
        if(max < count[j]) {
            max = count[j];
            result = 'A'+j;
            p = 1;
        } else if(count[j]==max) p++;
    }
    if(p>=2) cout << "?";
    else cout << result;
    return 0;
}
