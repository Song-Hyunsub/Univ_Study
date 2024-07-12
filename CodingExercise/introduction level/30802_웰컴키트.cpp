#include <iostream>
using namespace std;
int main(){
    int N, arr[6], T, P, t2=0;
    cin >> N;
    for(int i=0; i<6; i++){
        cin >> arr[i];
    }
    cin >> T >> P;
    for(int i=0; i<6; i++){
        if(arr[i]%T==0) t2 += arr[i]/T;
        else t2 += arr[i]/T + 1;
    }
    cout << t2 << "\n";
    cout << N/P << " " << N%P << endl;
    return 0;
}
