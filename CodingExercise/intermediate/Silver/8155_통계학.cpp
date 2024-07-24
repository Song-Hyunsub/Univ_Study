/*
산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이
테케 개수 N을 먼저 입력 받음 (단, N은 홀수)
그 다음 N개의 줄에 정수들을 입력 받음
배열 : 최빈값을 찾는데 유리함
벡터 : 중앙값과 범위를 찾는데 유리함
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> v(N);
    int arr[N];
    for(int i=0; i<N; i++){    // 벡터와 배열에 모두 같게 입력받기
        cin >> v[i];
        arr[i] = v[i];
    }
    // 1. 산술평균
    int avg, sum=0;
    int frequency[8001] = {0}; // -4000 ~ 4000을 저장할 수 있는 배열
    for(int i=0; i<N; i++){
        sum += v[i];
        frequency[v[i] + 4000]++; // 인덱스를 0부터 시작하게 조정
    }
    avg = round(sum/(double)N);
    // 2. 중앙값
    sort(v.begin(), v.end());
    int mid = v[N/2];
    // 3. 최빈값
    
    int maxFrequency = 0;
    vector<int> modes;
    for(int i=0; i<8001; i++){
        if(frequency[i] > maxFrequency){
            maxFrequency = frequency[i];
            modes.clear();
            modes.push_back(i-4000);
        } else if (frequency[i] == maxFrequency) {
            modes.push_back(i - 4000);
        }
    }
    sort(modes.begin(), modes.end());
    int mode = (modes.size() > 1) ? modes[1] : modes[0];
    
    
    // 4. 범위
    int range = v.back() - v.front();
    
    cout << avg << endl;
    cout << mid << endl;
    cout << mode << endl;
    cout << range << endl;
}
