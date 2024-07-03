/*
각 입력을 42로 나눈 나머지의 서로 다른 값이 몇 개인지 출력하도록 한다.
=> 
N 변수, 벡터(N) 선언
벡터(N)의 요소 입력받기
배열 = 해당 입력%42

set 구조체를 이용한다
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N = 10;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
        if(v[i]>1000 || v[i]<0) {
            cout << "Error!";
            return 0;
        }
        v[i] = v[i]%42;
    }
    set<int> u(v.begin(), v.end());
    
    // u에는 중복되지 않은 값들만 들어있습니다.
    // u.size()를 사용하면 서로 다른 값의 개수를 알 수 있습니다.
    int d_count = u.size();
    cout << d_count << endl;
    
    return 0;
}
