/*
조작한 점수 = 점수/최댓값*100
과목의 개수 초기화 및 입력 => int N; cin >> N;
점수의 배열 초기화 => vector<int> v(N);
점수 입력 받기 => for(i=0; i<N; i++){ cin >> v[i]; }
최댓값 초기화 및 로직 구현 => int max=0; for(...){ if(v[i]>max) max=v[i]; }
변환된 점수로 배열 초기화 => for(i=0; i<=N; i++){ v[i]=v[i]/max*100; }
새로운 평균 구하기 => int nsum; for(int j=0; j<=N j++){ nsum+=v[j]; }
*/  

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    int max=0;
    double nsum = 0;
    cin >> N;
    vector<double> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];
        if(v[i]>max) max=v[i];
    }
    for(int j=0; j<N; j++) {
        v[j]=v[j]/max*100;
        nsum+=v[j];
    }
    double c = nsum / N;
    cout << c;
    return 0;
}
