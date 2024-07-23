/*
30% 절사 평균 적용 : 위에서 15% 아래에서 15%를 각각 제외하고 평균 계산
제외할 인원은 반올림하여 계산한다.
계산된 평균 => 정수로 반올림!
1) n을 입력 받는다.
2) 그 이후 n개의 줄 동안, 의견 n개를 각각 입력 받는다.
3) 계산한 문제의 난이도 출력
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, sum=0, avg;
    cin >> n;
    vector<int> v(n);  // 크기를 정확하게 지정해줘야 한다.
    for(int i=0; i<n; i++){    // 난이도를 입력받음
        cin >> v[i];
    }
    double dnum = (double)n * 0.15;       // 난이도 벡터에서 절사할 양 끝 인원수를 구한다.
    int del = (int)(dnum + 0.5);
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (2 * del >= n) {
        cout << 0 << endl;
        return 0;
    }
    sort(v.begin(), v.end());    
    // 인덱스: del ~ n-del-1
    for(int i=del; i<n-del; i++){
        sum+=v[i];
    }
    double davg = sum / (double)(n - 2 * del);
    avg = (int)(davg + 0.5);
    cout << avg << endl;
    return 0;
}
