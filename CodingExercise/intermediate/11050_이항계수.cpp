#include <iostream>
using namespace std;
int main(){
    int n, k, m1=1, m2=1, m3=1, c;
    cin >> n >> k;
    int n2 = n;
    int k2 = k;
    while(k2>=1){
        m1 *= k2;
        k2--;
    }
    while(n2>=k+1){
        m2 *= (n2-k);
        n2--;
    }
    while(n>=1){
        m3 *= n;
        n--;
    }
    c = m3 / (m1 * m2);
    cout << c << "\n";
    return 0;
}
