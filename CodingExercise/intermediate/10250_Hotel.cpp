/*
(N - 1) % H + 1 => 층
(N - 1) / H + 1 => 호
100 * ((N - 1) % H + 1 )+ (N - 1) / H + 1
*/


#include <iostream>
using namespace std;

int main(){
    int T, H, W, N;
    cin >> T;
    while(T--){
        cin >> H >> W >> N;
        if(N > H * W) {
            cout << "Error!" << "\n";
            return 0;
        }
        int floor = (N - 1) % H + 1;
        int room = (N - 1) / H + 1;
        cout << floor * 100 + room << "\n";
    }
    return 0;
}
