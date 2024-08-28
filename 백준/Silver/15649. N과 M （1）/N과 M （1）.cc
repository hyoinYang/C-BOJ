#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arr(9);
int n, m;
bool visited[9];

void dfs(int idx) {

	if (idx == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[idx] = i;
			dfs(idx + 1);
			visited[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	dfs(0);

	return 0;
}
