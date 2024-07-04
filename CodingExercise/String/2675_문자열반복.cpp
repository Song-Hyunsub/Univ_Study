/*
(1) 첫 줄에 테케의 개수 N을 받는다.
(2) 둘째줄에 반복 횟수 M을 먼저 입력받은 후, 그 뒤에 string을 받는다.
(3) 테케의 개수 N 만큼 (2)를 반복한다.
(4) (2)를 입력 받을 때, 출력은 cout << str[i]; 를 우선 M번 반복하고 그 후 i 인덱스를 size만큼 반복루프를 돌게 한다.

*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, M;
    string s;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> M >> s;
        for(int j=0; j<s.size(); j++){
            for(int k=0; k<M; k++){
                cout << s[j];
            }
        }
        cout << '\n';
    }
    return 0;
}
