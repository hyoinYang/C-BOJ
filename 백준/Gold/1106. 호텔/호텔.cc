#include <iostream>
#include <vector>
using namespace std;

int c, n;
vector<pair<int, int>> input;
int dp[100001];

void countDP() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 100000; j++) {
			int cost = input[i].first;
			int person = input[i].second;

			if (j - cost >= 0) {
				dp[j] = max(dp[j], dp[j - cost] + person);
			}
		}
	}

	for (int i = 1; i <= 100000; i++) {
		if (dp[i] >= c) {
			cout << i;
			break;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> c >> n;
	input.push_back({ 0, 0 });
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		input.push_back({ a, b });
	}

	countDP();

	return 0;

}
