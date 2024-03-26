#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<int> personTime;
	int n; int idx = 0;
	cin >> n;
	// 사람들 정보 채우기
	while (n--) {
		int temp;
		cin >> temp;
		personTime.push_back(temp);
		idx++;
	}

	// 돈을 인출할 때의 시간 합 구하기
	int sum = 0;
	sort(personTime.begin(), personTime.end(), compare);
	for (idx = 0; idx < personTime.size(); idx++) {
		sum += personTime.at(idx) * (personTime.size() - idx);
		// cout << "personTime: " << personTime.at(idx) << ", sum: " << sum << "\n";
	}

	cout << sum << "\n";
}