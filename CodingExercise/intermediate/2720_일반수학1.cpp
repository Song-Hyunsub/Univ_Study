#include <iostream>
using namespace std;
int main(){
    int num, T;
    int arr[4] = {0};
    cin >> T;
    while(T>=1){
        cin >> num;
        arr[0] = num / 25;
        arr[1] = (num % 25) / 10;
        arr[2] = (num % 25) % 10 / 5;
        arr[3] = ((num % 25) % 10) % 5;
        for(int i=0; i<4; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        T--;
    }
    return 0;
}
