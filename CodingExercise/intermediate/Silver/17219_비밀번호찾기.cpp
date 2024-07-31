#include <iostream>
#include <map>
using namespace std;
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N, M;
    cin >> N >> M; // 사이트와 pw의 짝 16개와, 기억 안나는 사이트 4개 입력
    map<string, string> sitepw;
    string site, pw; 
    while(N>=1){
        cin >> site >> pw;
        sitepw[site] = pw;
        N--;
    }
    while(M>=1){
        cin >> site;
        cout << sitepw[site] << endl;
        M--;
    }
    return 0;
}
