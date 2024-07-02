/*
입력)
M개의 줄에 걸쳐서 공을 넣는 방법이 주어진다.
i번 바구니부터 j번 바구니까지 k번 번호의 공을 넣는다.
1<=i<=j<=k, 1<=k<=N
출력)
1번 바구니부터 N번 바구니에 들어있는 공의 번호를 출력한다.
(이때 제일 마지막의 넣은 공의 번호만 각각 출력한다.)
공이 들어있지 않은 바구니는 0 출력

벡터가 아닌 배열로 구현할 때, 초기값 정하기 => int arr[100] = {0, };
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    if(N>=1 && N<=100 && M>=1 && N<=100){
        int i, j, k;
        vector<int> A(N, 0);
        for(int l=0; l<M; l++){
            cin >> i >> j >> k;
            if(1<=i && i<=j && j<=N && 1<=k && k<=N){
                for(int m=i-1; m<j; m++){    // i~j의 바구니의 원소를 k로 초기화
                    A[m]=k;
                }
            } else {
                cout << "Error!";
                return 0;
            }
        }
        for(int p=0; p<N; p++){
            cout << A[p] << " ";
        }
    } else cout << "Error!";
    return 0;
}
