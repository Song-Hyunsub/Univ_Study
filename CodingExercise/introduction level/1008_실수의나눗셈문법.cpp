#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if(A>0&&A<10&&B>0&&B<10){
        cout.precision(9);
        cout << fixed;
        cout << (double)A/(double)B << endl;
    } else { cout << "Error!" << endl; }
    return 0;
}
