#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int count = 0; int n; long long k;
	vector<long long> money;
	cin >> n >> k;
	while (n--) {
		long long temp;
		cin >> temp;
		money.push_back(temp);
	}

	while (k != 0) {
		long long m;
		m=(upper_bound(money.begin(), money.end(), k))-money.begin();
		m--;
		count += k / money.at(m);
		k -= money.at(m) * (k / money.at(m));
	}

	cout << count;
}