#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){ 
    int N, sum=0;
    cin >> N;
    vector<int> time(N);
    for(int i=0; i<N; i++){
        cin >> time[i];
    }
    sort(time.begin(), time.end());
    for(int i=0; i<N; i++){
        sum += (N-i) * time[i];
    }
    cout << sum << endl;
    return 0;
}
