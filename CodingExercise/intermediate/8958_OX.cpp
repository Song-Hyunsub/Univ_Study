#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, p=0, q=0;
    cin >> N;
  
    while(N>0){
        string str;
        cin >> str;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='O') {q++; p+=q;}
            else if (str[i] == 'X'){ q=0; }
        }
        cout << p << "\n";
        p=0; q=0;  // 다시 0으로 초기화해줘야 하는 것 주의!!
        N--;
    }
    return 0;
}
