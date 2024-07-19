#include <iostream>
#include <queue>
using namespace std;

int lastCard(int N){
    queue<int> q;
    for(int i=1; i<=N; i++){
        q.push(i);
    }
    while(q.size()>1){
        // 제일 위의 카드를 버림
        q.pop();
        // 제일 위의 카드를 제일 아래로 옮김
        q.push(q.front());
        q.pop();
    }
    return q.front();

}

int main(){
    int N;
    cin >> N;
    int result = lastCard(N);
    cout << result << endl;
    return 0;
}
