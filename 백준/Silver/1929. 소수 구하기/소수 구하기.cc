#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> checkPrime(vector<int> nums, int m) {
	for (int i = 0; i <= m; i++) {
		nums.push_back(i);
	}
	for (int i = 2; i <= m; i++) {
		if (nums[i] == 0) continue;
		for (int j = 2 * i; j <= m; j += i) {
			nums[j] = 0;
		}
	}
	return nums;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int m, n;
	cin >> m >> n;

	vector<int> nums;

	nums = checkPrime(nums, n);

	for (int i = m; i < nums.size(); i++) {
		if (nums[i] != 0) {
			if (i <= 1)
				continue;
			cout << nums[i] << "\n";
		}
	}

}