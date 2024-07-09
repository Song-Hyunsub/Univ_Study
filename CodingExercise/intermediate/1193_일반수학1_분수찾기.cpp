/*
[1]
1 1 2 3 2 1 1 2 3 4 5 4 3 2 1 
[2]
1 2 1 1 2 3 4 3 2 1 1 2 3 4 5
[1] + [2]
2 3 3 4 4 4 5 5 5 5 6 6 6 6 6
*/


#include <iostream>
using namespace std;
int main(){
    int N, cnt=1;
    cin >> N;
    while(N>cnt){
        N -= cnt;
        cnt++;
    }
    
    if(cnt % 2 == 1)
        cout << cnt + 1 - N << "/" << N << endl;
    else
        cout << N << "/" << cnt + 1 - N << endl;
}
