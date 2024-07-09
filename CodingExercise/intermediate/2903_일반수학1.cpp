/*
N=1 3^2
N=2 5^2
N=3 9^2
N=4 17^2
N=5 33^2
*/

#include <iostream>
using namespace std;
int q(int i){
    if(i==1) return 2;
    else return 2* q(i-1);
}
int p(int i){
    if(i==1) return 3;
    else {return q(i-1)+p(i-1);}
    
}

int main(){
    int N, num;
    cin >> N;
    num = p(N) * p(N);
    cout << num << endl;
}
