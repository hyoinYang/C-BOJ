#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int k;
	cin >> k;
	stack<int> jaeMin;

	long long sum=0;

	while (k--) {
		int temp;
		cin >> temp;

		if (temp == 0) {
			sum -= jaeMin.top();
			jaeMin.pop();
		}
		else {
			jaeMin.push(temp);
			sum += temp;
		}
	}

	cout << sum;
}