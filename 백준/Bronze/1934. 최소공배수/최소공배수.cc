#include <iostream>

using namespace std;

int findMaxCommonDivsior(int a, int b) {
	int max = 1;
	if (a > b) {
		for (int i = 1; i <= a; i++) {
			if (a % i == 0 && b % i == 0) max = i;
		}
	}
	else {
		for (int i = 1; i <= b; i++) {
			if (a % i == 0 && b % i == 0) max = i;
		}
	}
	return max;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	int a, b; int min = 0;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int commonDiv = findMaxCommonDivsior(a, b);
		int remainA = a / commonDiv;
		int remainB = b / commonDiv;
		cout << commonDiv * remainA * remainB << "\n";
	}
}