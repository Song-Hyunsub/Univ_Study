#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // 입출력 속도 향상을 위해 C++과 C의 표준 입출력을 분리
    cin.tie(0); // 입력 스트림을 untie
    cout.tie(0); // 출력 스트림을 untie
    
    map<string, int> ma; // 문자열을 키로 하고 등장 횟수를 값으로 저장하는 맵
    vector<string> vt; // 공통으로 등장하는 문자열을 저장하는 벡터
    int n, m; // 두 목록의 문자열 개수를 저장할 변수
    cin >> n >> m; // 두 목록의 크기를 입력받음
    
    // 총 n + m 개의 문자열을 입력받음
    for (int i = 0; i < n+m; i++) {
        string str; // 입력받을 문자열
        cin >> str; // 문자열 입력
        ma[str]++; // 해당 문자열의 등장 횟수를 증가
        if (ma[str] > 1) // 두 번째로 등장한 경우
            vt.push_back(str); // 벡터에 문자열 추가
    }
    
    sort(vt.begin(), vt.end()); // 벡터를 사전순으로 정렬
    cout << vt.size() << '\n'; // 공통 문자열의 개수를 출력
    for (auto o : vt) // 정렬된 공통 문자열을 하나씩 출력
        cout << o << '\n';
}
