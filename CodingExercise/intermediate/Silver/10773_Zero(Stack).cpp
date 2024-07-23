/*
K개의 줄에 정수가 1개씩 
정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다.
1) 정수 K 입력받기
2) K개의 줄에 정수를 1개씩 입력 받는다. 
3) 정수가 "0"일 경우에 바로 위의 수를 지운다. 
*/

#include <iostream>
#include <stack>
using namespace std;
int main(){
    int K, num, sum=0;
    cin >> K; // 1)
    stack<int> s;
    for(int i=0; i<K; i++){
        cin >> num;    // 2)
        if(num==0){
            if(!s.empty()) s.pop();
            continue;
        }
        s.push(num);
    }
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum << endl;
}
