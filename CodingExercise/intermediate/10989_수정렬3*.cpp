#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, n=0;
    cin >> T;
    int arr[10001] = { 0 };
    for(int i=0; i<T; i++){
        int in;
        cin >> in;
        arr[in] += 1;
    }
    for(int i=1; i<10001; i++){          // 정렬 출력하는 반복문 주의깊게 보기!!
        for(int j=0; j<arr[i] ; j++){
            cout << i << "\n";
        }
    }
    return 0;
}
