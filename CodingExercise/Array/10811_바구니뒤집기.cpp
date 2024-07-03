/*
첫째 줄 : N, M 입력
둘째 줄 : M개의 줄에 바구니 순서를 역순으로 만드는 방법이 주어짐.
방법은 i, j로 나타내고, 왼쪽으로부터 i번째 바구니부터 j번째 바구니의 순서를 역순으로 만든다.
=> v[1], v[2], ..., v[i-1], v[i]~v[j], v[j+1], ... v[N]에서 
i, j를 입력 받은 후에는
v[1], v[2], ..., v[i-1], v[j]~v[i], v[j+1], ... v[N] 순서가 됨

출력 : 모든 순서 바꿈 후, 가장 왼쪽에 있는 바구니부터 바구니에 적혀있는 순서를 출력
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M, i, j;
    cin >> N >> M;
    vector<int> v(N+1);
    for(int l=0; l<N; l++){
        v[l+1] = l+1;
    }
    for(int k=0; k<M; k++){
        cin >> i >> j;
        for(int m=i; m<=(i+j)/2; m++){   // 역순으로 바꿀 때는 끝의 인덱스를 (i+j)/2로 해줘야 한다!!ㅓ
            int temp = v[m];
            v[m] = v[i+j-m];
            v[i+j-m] = temp;
        }
    }
    for(int n=1; n<=N; n++){
        cout << v[n] << " ";
    }
    return 0;
}
