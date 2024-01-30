#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool compare(const pair<int, int> &a, const pair<int, int> &b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}



int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; int idx = 0; int first, second;
	cin >> n;
	vector<pair<int, int>> point;

	for (int i = 0; i < n; i++) {
		cin >> first >> second;
		point.push_back(make_pair(first, second));
	}
	sort(point.begin(), point.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << point[i].first << " " << point[i].second << "\n";
	}
}