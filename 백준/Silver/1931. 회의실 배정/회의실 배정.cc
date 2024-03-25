#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 끝나는 시간에 대해 오름차순 정렬
bool compare(pair<int, int> a, pair<int, int>  b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	vector<pair<int, int>> times; // 에반데
	while (n--) {
		int t1, t2;
		cin >> t1 >> t2;
		times.push_back(make_pair(t1, t2));
	}
	sort(times.begin(), times.end(), compare);

	int startTime = 0;
	int count = 0;

	// 끝날 때까지의 회의시간 정하기
	for (int idx = 0; idx < times.size(); idx++) {
		if (startTime <= times.at(idx).first) {
			startTime = times.at(idx).second;
			count++;
		}
	}

	cout << count << "\n";

}