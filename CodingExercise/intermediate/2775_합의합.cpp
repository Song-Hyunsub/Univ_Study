/*
a층의 b호에 사는 사람 수 : (a-1)층의 1호부터 b호까지 사는 사람 수의 합
0층 => 1호 1명, 2호 2명, ... n호 n명
1층 => n호 : 1+2+...+n명 = n*(n+1)/2
2층 => n호 : 1+2+...+n*(n+1)/2
3층 => 
arr[a-1]
=> k층의 n호에 사는 사람 수

}
*/


#include <iostream>
using namespace std;

int main(){
    int T;
        int arr[15][15]={0}; // 배열을 특정 수로 초기화

    cin >> T;

    while(T>0){
        int k, n;  // 변수 위치 조정
        cin >> k >> n;
        
        for(int i=1; i<=14; i++){
            arr[0][i] = i;
        }
        
        for(int i=1; i<=14; i++){
            for(int m=1; m<=14; m++){
                arr[i][m] = 0;  // 초기화
                for(int j=1; j<=m; j++){
                    arr[i][m] += arr[i-1][j];
                }
            }
        }
    
        cout << arr[k][n] << "\n";
        T--;
    }
    return 0;
}
