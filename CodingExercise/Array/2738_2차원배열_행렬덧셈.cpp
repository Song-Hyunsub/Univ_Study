#include <iostream>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    int arr1[N][M];
    int arr2[N][M];
    int result[N][M];
    for(int i=0; i< N; i++){
        for(int j=0; j<M; j++){
            cin >> arr1[i][j];
        }
    }
    for(int i=0; i< N; i++){
        for(int j=0; j<M; j++){
            cin >> arr2[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            result[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
