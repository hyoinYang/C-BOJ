#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	long long temp;
	vector<long long> nums;
	vector<long long> sorted;
	cin >> n;
	while (n--) {
		cin >> temp;
		nums.push_back(temp);
		sorted.push_back(temp);
	}

	sort(sorted.begin(), sorted.end());
	sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

	for (int i = 0; i < nums.size(); i++) {
		cout << lower_bound(sorted.begin(), sorted.end(), nums[i]) - sorted.begin() << " ";
	}
}