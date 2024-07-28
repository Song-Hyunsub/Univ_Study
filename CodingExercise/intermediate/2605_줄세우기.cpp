/*
v2 벡터를 사용하여 학생들이 최종적으로 줄을 선 순서를 계산
각 학생은 자신이 뽑은 번호만큼 앞으로 가서 줄을 서게 됨
이때 insert 함수를 사용하여 해당 위치에 학생을 삽입
i + 1은 학생의 번호를 의미 (1부터 시작하는 번호).
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> v1(N);
    vector<int> v2(N);
    
    for(int i=0; i<N; i++){
        cin >> v1[i]; 
    }
    for(int i = 0; i < N; ++i) {
        int pos = v1[i];
        v2.insert(v2.begin() + (i - pos), i + 1);
    }
    for(int i = 0; i < N; ++i) {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}
