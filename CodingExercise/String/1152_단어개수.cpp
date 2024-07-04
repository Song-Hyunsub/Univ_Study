#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num=0;
    while(true){
        string s;
        cin >> s;
        if(cin.eof()) break; 
        num++;
    }
    cout << num;
    return 0;
}
