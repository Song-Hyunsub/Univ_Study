#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, m, max = -1;
    long long start, end, mid, sum;
    // n: 나무의 개수
    // m: 상근이가 집으로 가져가야 하는 나무의 최소 길이
    // max: 절단기 높이의 최댓값을 저장할 변수 (초기값은 -1)
    // start, end, mid, sum: 이분 탐색 및 나무 길이 합산에 필요한 변수들
    // arr[n]: 나무 높이를 저장하는 배열
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    start = 0;    // start는 절단기 높이의 최소값인 0으로 초기화합니다.
    end = arr[n-1];    
    // end는 절단기 높이의 최댓값으로 설정할 수 있는 배열 arr의 최댓값(가장 높은 나무의 높이)로 초기화합니다.
    while(start <= end){
        sum = 0;
        mid = (start + end) / 2;
        for(int i=0; i<n; i++){
            if(arr[i]-mid > 0) sum += arr[i]-mid; // 자른 나무 길이
        }
        // 배열 arr의 각 나무 높이에서 mid 값을 뺀 나머지를 계산하여 sum에 더합니다. 이 값이 자른 나무 길이를 나타냅니다.
        // 만약 arr[i]가 mid보다 크다면 나무의 일부가 잘리므로, 그 잘린 부분의 길이만큼 sum에 더합니다.
        if(sum >= m){
            start = mid + 1;
            if(mid > max) max = mid;
        }
        else end = mid - 1;
        // sum이 m 이상인 경우:
        // 필요한 만큼의 나무를 얻을 수 있으므로, mid 값을 더 큰 값으로 시도하기 위해 start를 mid + 1로 설정합니다.
        // 이때, 현재 mid 값이 최대 절단기 높이 max보다 크다면 max를 갱신합니다.
        // sum이 m보다 작은 경우:
        // mid 값이 너무 크다는 의미이므로, end를 mid - 1로 설정하여 더 낮은 mid 값을 탐색합니다.
    }
    cout << max;
    return 0;
}
