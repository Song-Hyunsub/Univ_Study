#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v(6, 0);
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
        if(i==0 || i==1) v[i]-=1;
        else if(i>=2 && i<=4) v[i]-=2;
        else v[i]-=8;
        cout << -v[i] << " ";
    }
    return 0;
}
