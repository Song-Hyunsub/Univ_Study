#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int arr[N]; // 수의 개수만큼 배열 선언

    for(int i = 0; i < N; i++){
        cin >> arr[i]; // 입력값 저장
    }

    sort(arr, arr + N); // 배열을 오름차순으로 정렬

    for(int i = 0; i < N; i++){
        cout << arr[i] << "\n"; // 정렬된 값 출력
    }

    return 0;
}
