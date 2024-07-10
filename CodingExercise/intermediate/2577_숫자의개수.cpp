#include <iostream>
using namespace std;
int main(){
    int a, b, c, num[10] = {0};
    cin >> a >> b >> c;
    int pr = a * b * c;
    while(pr>0){
        num[pr%10]++;
        pr/=10;
    }
    for(int i=0; i<=9; i++){
        cout << num[i] << "\n";
    }
    return 0;
}
