#include <iostream>
#include <string>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;
    for (int i=0; i<=A.size()/2; i++){
        char temp = A[i];
        A[i] = A[A.size()-i-1];
        A[A.size()-i-1] = temp;
    }
    for (int i=0; i<=B.size()/2; i++){
        char temp = B[i];
        B[i] = B[B.size()-i-1];
        B[B.size()-i-1] = temp; 
    }
    if(stoi(A)>stoi(B)) cout << stoi(A);
    else cout << stoi(B);
    return 0;
}
