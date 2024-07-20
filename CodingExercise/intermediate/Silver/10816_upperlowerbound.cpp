/*
lower_bound는 범위 [first, last) 내에서 value보다 크거나 같은 첫 번째 원소의 반복자를 반환합니다. 
만약 value가 범위 내의 모든 원소보다 크다면 last 반복자를 반환합니다.

upper_bound 함수는 주어진 값보다 큰 첫 번째 원소의 위치를 찾습니다. 
즉, 범위 내의 원소 중에서 주어진 값보다 큰 첫 번째 원소의 반복자를 반환합니다.


*/

#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[500000];

int count_cards(int n) {
    auto lower = lower_bound(arr, arr + N, n);
    auto upper = upper_bound(arr, arr + N, n);
    return upper - lower;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    
    cin >> M;
    for(int i = 0; i < M; i++) {
        int n;
        cin >> n;
        cout << count_cards(n) << ' ';
    }
    return 0;
}
