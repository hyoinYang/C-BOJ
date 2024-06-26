#include <iostream>
#include <set>
#include <math.h>
using namespace std;

bool checkPrime(int m) {
	//cout << m << " "<< "\n";
	if (m <= 1) return false;
	if ((m != 2 && m % 2 == 0) ||(m != 3 && m % 3 == 0)) return false;
	for (int i = 5; i * i <= m; i++) {
		if (m % i == 0 || m % (i + 2) == 0) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int m, n;
	cin >> m >> n;

	set<int> nums;

	for (int i = m; i <= n; i++) {
		if (checkPrime(i) == true) {
			nums.insert(i);
		}
	}

	for (auto n : nums) {
		cout << n << "\n";
	}
}