#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int n, m, result = 0;
int grid[1001][1001];
queue<pair<int, int>> q;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		
		// 상하좌우 확인
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (0 <= nx && 0 <= ny && nx < m && ny < n && grid[ny][nx] == 0) {
				grid[ny][nx] = grid[y][x] + 1;
				q.push(make_pair(ny, nx));
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int temp;
			cin >> temp;
			grid[i][j] = temp;

			if (grid[i][j] == 1)
				q.push(make_pair(i, j));
		}
	}

	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 0) {
				cout << "-1\n";
				return 0;
			}
			if (result < grid[i][j]) {
				result = grid[i][j];
			}
		}
	}
	cout << result - 1;
	return 0;
}
