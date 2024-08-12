#include <iostream>
#include <vector>

using namespace std;

int white = 0; // 하얀색 색종이 개수
int blue = 0;  // 파란색 색종이 개수

void countPaper(const vector<vector<int>>& paper, int x, int y, int size) {
    int color = paper[x][y];
    bool isSameColor = true;
    
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (paper[i][j] != color) {
                isSameColor = false;
                break;
            }
        }
        if (!isSameColor) break;
    }

    if (isSameColor) {
        if (color == 0) white++;
        else blue++;
    } else {
        int newSize = size / 4;
        countPaper(paper, x, y, size / 2);
        countPaper(paper, x + size / 2, y, size / 2);
        countPaper(paper, x, y + size / 2, size / 2);
        countPaper(paper, x + size / 2, y + size / 2, size / 2);
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> paper(N, vector<int>(N));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> paper[i][j];
        }
    }
    
    countPaper(paper, 0, 0, N);
    
    cout << white << endl;
    cout << blue << endl;
    
    return 0;
}
