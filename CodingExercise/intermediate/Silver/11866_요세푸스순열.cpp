/*
1 2 3 4 5 6 7
: 3
1 2 4 5 6 7
: 6
1 2 4 5 7
: 2
1 4 5 7
: 7
1 4 5
: 5
1 4
: 1
4
: 4
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    vector<int> vec(N, 0);
    for(int i=0; i<N; i++){
        vec[i] = i+1;
    }
    cout << "<";
    int index = 0;
    while(vec.size() > 1){
        index = (index + K - 1) % vec.size();
        cout << vec[index] << ", ";
        vec.erase(vec.begin() + index);
    }
    cout << vec[0] << ">\n";
}
