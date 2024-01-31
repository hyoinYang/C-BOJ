#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	int sum = 0;
	int maxA=0, maxB = 0, maxC = 0;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				if (i < j + k && j < i + k && k < i + j) {
					if (i > maxA) maxA = i;
					if (j > maxB) maxB = j;
					if (k > maxC) maxC = k;
					sum = maxA + maxB + maxC;
				}
			}
		}
	}
	cout << sum;

	return 0;
}