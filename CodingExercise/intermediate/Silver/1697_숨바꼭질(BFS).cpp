#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> visited(100001, -1);  // 방문 기록 및 각 위치에 도달하는데 걸린 시간을 기록
    queue<int> q;
    
    visited[N] = 0;
    q.push(N);
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        
        // 만약 동생의 위치에 도달하면 결과 출력
        if (current == K) {
            cout << visited[current] << "\n";
            return 0;
        }
        
        // 걷기 - X-1 위치로 이동
        if (current - 1 >= 0 && visited[current - 1] == -1) {
            visited[current - 1] = visited[current] + 1;
            q.push(current - 1);
        }
        
        // 걷기 - X+1 위치로 이동
        if (current + 1 <= 100000 && visited[current + 1] == -1) {
            visited[current + 1] = visited[current] + 1;
            q.push(current + 1);
        }
        
        // 순간이동 - 2*X 위치로 이동
        if (current * 2 <= 100000 && visited[current * 2] == -1) {
            visited[current * 2] = visited[current] + 1;
            q.push(current * 2);
        }
    }
    
    return 0;
}
