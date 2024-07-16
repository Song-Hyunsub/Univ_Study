
/* [Solution 1]
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
*/

/* [Solution 2] => 시간 초과!!
#include <iostream>
using namespace std;
int fact(int n){
    if(n==1) return 1;
    else return n * fact(n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, c;
    cin >> n >> k;
    c = fact(n) / (fact(n-k)*fact(k));
    cout << c << "\n";
    return 0;
}
*/

// [Solution 3]
#include <iostream>
using namespace std;
int fact(int n){
    int mul = 1;
    for(int i=n; i>0; i--){
        mul *= i;
    }
    return mul;
}
int main(){
    int n, k, c;
    cin >> n >> k;
    c = fact(n) / (fact(n-k)*fact(k));
    cout << c << "\n";
    return 0;
}
