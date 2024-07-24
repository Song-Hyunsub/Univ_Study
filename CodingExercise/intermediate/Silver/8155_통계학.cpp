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


/*
최빈값 구하는 과정 상세)
1. 빈도 배열 초기화:
주어진 숫자들의 범위가 -4000부터 4000까지이므로, 이를 표현하기 위해 크기가 8001인 배열을 사용합니다.
배열의 각 인덱스는 숫자와 대응됩니다. 예를 들어, -4000은 배열의 0번째 인덱스에, 0은 4000번째 인덱스에, 4000은 8000번째 인덱스에 저장됩니다.
배열을 초기화하여 각 숫자의 빈도를 저장합니다.
2. 빈도 계산:
입력받은 각 숫자의 빈도를 계산하여 배열에 저장합니다.
숫자 numbers[i]의 빈도는 frequency[numbers[i] + 4000] 위치에 저장됩니다.
3. 최빈값 탐색:
배열을 탐색하여 가장 높은 빈도수를 찾습니다.
빈도수가 가장 높은 숫자들을 modes 벡터에 저장합니다.
4. 최빈값 결정:
modes 벡터에는 최빈값 후보들이 저장되어 있습니다.
여러 개의 최빈값이 있을 경우, 두 번째로 작은 값을 출력합니다.
*/
