/*
설명
입력 처리:
n은 컴퓨터의 수.
m은 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍의 수.
두 컴퓨터가 연결된 쌍의 정보를 인접 리스트로 저장합니다.

BFS를 이용한 바이러스 전파:
큐를 이용하여 BFS를 구현합니다.
1번 컴퓨터에서 시작하여 바이러스가 전파되는 컴퓨터를 큐에 넣고 방문합니다.
방문하지 않은 컴퓨터를 방문할 때마다 감염된 컴퓨터 수를 증가시킵니다.

결과 출력:
최종적으로 바이러스에 감염된 컴퓨터의 수를 출력합니다. 
1번 컴퓨터는 초기 감염자이므로 제외하고 감염된 컴퓨터 수를 세야 합니다.
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);     // 인접리스트
    vector<bool> visited(n + 1, false); // 방문 여부
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // 양방향 연결 상태 저장
        adj[v].push_back(u);
    }
    queue<int> q;         // BFS(너비 우선 탐색)를 위해 큐를 사용합니다.
    q.push(1);            // 1번 컴퓨터부터 탐색을 시작하므로 q에 1을 넣고
    visited[1] = true;    // visited[1]을 true로 설정합니다.
    int infected_count = 0; // 감염된 컴퓨터 수를 세는 변수
    while (!q.empty()) {  // 큐가 비어있지 않은 동안 반복합니다.
        int current = q.front();  // current는 현재 탐색 중인 컴퓨터 번호입니다.
        q.pop();  // q.front()로 큐의 맨 앞의 요소를 가져오고, q.pop()으로 큐에서 제거
        for (int neighbor : adj[current]) {  // 현재 컴퓨터 current의 모든 인접 컴퓨터들을 확인
            // 인접 컴퓨터 neighbor가 아직 방문되지 않았다면: 
            // visited[neighbor]를 true로 설정하여 방문 표시를 합니다.
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor); // neighbor를 큐에 넣어 다음 탐색 대상으로 만듭니다.
                infected_count++; // 감염된 컴퓨터 수를 증가시킵니다.
            }
        }
    }
    cout << infected_count << endl;
    return 0;
}

/*
인접리스트를 vector<vector<int>>로 선언하는 이유

효율적인 저장 공간:
인접 행렬을 사용할 경우 O(n^2)의 공간이 필요하지만, 
인접 리스트는 O(n+m)의 공간만 필요합니다. 
n은 노드의 수, m은 간선의 수입니다.
대부분의 실제 네트워크에서는 노드들이 일부 다른 노드들과만 연결되므로, 
인접 리스트가 메모리 사용 측면에서 훨씬 효율적입니다.

빠른 인접 노드 접근:
특정 노드에 연결된 모든 이웃 노드를 쉽게 찾을 수 있습니다.
예를 들어, adj[1]은 1번 컴퓨터에 직접 연결된 모든 컴퓨터를 포함하므로, 
이를 순회하면서 간단히 접근할 수 있습니다.
*/
