#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	priority_queue<int> q;

	int n;
	cin >> n;
	while (n--) {
		long x;
		cin >> x;

		if (x == 0) {
			if (!q.empty()) {
				int temp = q.top();
				q.pop();
				cout << temp << "\n";
			}
			else {
				cout << "0\n";
			}
		}
		else {
			q.push(x);
		}

	}


	return 0;
}
