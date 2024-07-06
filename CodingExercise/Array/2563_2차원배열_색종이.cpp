#include <iostream>
using namespace std;
int a[100][100];
int main(){
    int N, x, y; int count = 0;
    cin >> N;
    for(int k=0; k<N; k++){
        cin >> x >> y;
        for(int i=y; i<y+10; i++){
            for(int j=x; j<x+10; j++){
                if(!a[i][j]){
                    count++;
                    a[i][j]=1;
                }
            }
        }
    }
    cout << count;
}
 
