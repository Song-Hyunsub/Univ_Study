#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;
const int MAX = 100;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 }; //탐색용
int n, m, a[MAX][MAX], visited[MAX][MAX], y, x;
int main() {
	cin >> n >> m;
	string temp;
	for (int i = 0; i < n; i++) 
	{
		cin >> temp;
		for (int j = 0; j < m; j++) 
		{
			a[i][j] = temp[j] - '0';
		}
			temp = "";
	}
	queue<pair<int, int>> q;
	visited[0][0] = 1;
	q.push({ 0, 0 });
	while (q.size()) 
	{
		y = q.front().first;
		x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || ny >= n|| nx < 0 || nx >= m) continue;
			if (a[ny][nx] == 0) continue;
			if (visited[ny][nx] != 0) continue;

			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });
		}
	}
	cout << visited[n - 1][m - 1];
	return 0;
}
출처: https://ohsol.tistory.com/entry/백준-2178번-미로-탐색-C-풀이 [오솔의 블로그:티스토리]
