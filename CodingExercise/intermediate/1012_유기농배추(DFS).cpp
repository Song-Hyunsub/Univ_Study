#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(vector<vector<int>>& field, vector<vector<bool>>& visited, int x, int y, int M, int N) {
    stack<pair<int, int>> s;
    s.push({x, y});
    
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    while (!s.empty()) {
        int cx = s.top().first;
        int cy = s.top().second;
        s.pop();
        
        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if (nx >= 0 && nx < M && ny >= 0 && ny < N && field[nx][ny] == 1 && !visited[nx][ny]) {
                visited[nx][ny] = true;
                s.push({nx, ny});
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int M, N, K;
        cin >> M >> N >> K;
        
        vector<vector<int>> field(M, vector<int>(N, 0));
        vector<vector<bool>> visited(M, vector<bool>(N, false));
        
        for (int i = 0; i < K; ++i) {
            int x, y;
            cin >> x >> y;
            field[x][y] = 1;
        }
        
        int wormCount = 0;
        
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                if (field[i][j] == 1 && !visited[i][j]) {
                    visited[i][j] = true;
                    dfs(field, visited, i, j, M, N);
                    wormCount++;
                }
            }
        }
        
        cout << wormCount << endl;
    }
    
    return 0;
}
