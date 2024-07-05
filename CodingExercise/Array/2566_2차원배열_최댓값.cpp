#include <iostream>
using namespace std;
int main(){
    int N=9;
    int arr[N][N];
    int max = 0;
    int indR=0, indC=0;    // 이 초기화 작업을 진행하지 않으면 모든 원소가 0일 때, 오류!!
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                indR = i;
                indC = j;
            }
        }
    }
    cout << max << "\n" << indR+1 << " " << indC+1;
    return 0;
}
