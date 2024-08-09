#include <iostream>
#include <queue>
using namespace std;
#define MAX 1001

int N, M, V; // 정점 개수, 간선 개수, 시작정점
int map[MAX][MAX];  // 인접 행렬 그래프
bool visited[MAX];  // 정점 방문 여부
queue<int> q;  // BFS에서 사용할 큐

// 초기화 함수
void reset(){
    for (int i=1; i<=N; i++){
        visited[i] = 0;
    }
}

// 깊이 우선 탐색
void DFS(int v){
    visited[v] = true;
    cout << v << " ";
    for(int i=1; i<=N; i++){
        // 현재 정점과 연결되어있고 방문되지 않았으면
        if(map[v][i] == 1 && visited[i]==0){
            DFS(i);
        }
    }
}

// 너비 우선 탐색
void BFS(int v){
    q.push(v);
    visited[v] = true;
    cout << v << " ";
    
    while(!q.empty()){
        v = q.front();
        q.pop();
        // 현재 정점과 연결되어있고 방문되지 않았으면
        for (int w=1; w<=N; w++){
            if(map[v][w]==1 && visited[w]==0){
                q.push(w);
                visited[w] = true;
                cout << w << " ";
            }
        }
    }
}

int main(){
    cin >> N >> M >> V;
    for(int i=0; i<M; i++){
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    reset();
    DFS(V);
    cout << endl;
    reset();
    BFS(V);
    return 0;
}
