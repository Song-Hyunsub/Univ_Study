#include <iostream>
#include <string>
using namespace std;
string A, B, C;
int main(){
    cin >> A >> B >> C;
    cout << stoi(A) + stoi(B) - stoi(C) << endl;
    cout << stoi(A+B)-stoi(C) << endl;
}
