#include <iostream>
using namespace std;
/*
첫째 줄 : 정수의 개수 N (1~100)
둘째 줄 : 정수가 공백으로 구분됨
셋째 줄 : 찾으려고 하는 정수 v(-100~100)

출력 줄 : 찾으려는 정수 v의 개수 : vnum
*/
int main(){
    int N, a, v;
    int vnum=0;
    cin >> N;
    if(N>=1 && N<=100){
        int* array = new int[N];   // 동적 배열 선언
        for(int i=0; i<N; i++){    // 배열 입력받기
            cin >> array[i];
            if(array[i]<-100 || array[i]>100) {
                cout << "Error!"; 
                return 0;
            }
        }
        cin >> v;
        if(v>=-100 && v<=100){
            for(int j=0; j<N; j++){
                if(array[j]==v) vnum++;
                else continue;
            }
            cout << vnum;
        } else {
            cout << "Error!";
        }
    } else cout << "Error!";
    return 0;
}
