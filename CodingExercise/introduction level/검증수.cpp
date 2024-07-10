#include <iostream>
using namespace std;
int main(){
    int sum=0, N;
    for(int i=0; i<5; i++){
        cin >> N;
        sum += N * N;
    }
    sum %= 10;
    cout << sum << endl;
}
