#include <iostream>
using namespace std;
int main(){
    int p=0, N, a[9];
    for(int i=0; i<8; i++){
        cin >> N;
        a[i] = N;
        if(a[i]== i+1){
            p++;
        } else if(a[i] == 8 - i){
            p--;
        }
    }
    if(p==8){
        cout << "ascending" << "\n";
    } else if(p==-8){
        cout << "descending" << "\n";
    } else {
        cout << "mixed" << "\n";
    }
    return 0;
}
