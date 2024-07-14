#include <iostream>
using namespace std;

int main () {
    int n, m, min, gcd=0, lcm;
    cin >> n >> m;
    if(n > m) min = m;
    else min = n;
    for(int i=1; i<=min; i++){
        if(n%i==0 && m%i==0 && gcd < i){
            gcd = i;
            lcm = n * m / gcd;
        } else continue;
    }
    cout << gcd << "\n" << lcm << endl;
    return 0;
}
