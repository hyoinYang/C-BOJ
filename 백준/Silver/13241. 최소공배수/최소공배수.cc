#include <iostream>

using namespace std;

long long findMaxCommonDivsior(long long a, long long b) {
	long long  max = 1;
	if (a > b) {
		for (long long i = 1; i <= a; i++) {
			if (a % i == 0 && b % i == 0) max = i;
		}
	}
	else {
		for (long long i = 1; i <= b; i++) {
			if (a % i == 0 && b % i == 0) max = i;
		}
	}
	return max;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long a, b; long long min = 0;
	cin >> a >> b;
	long long commonDiv = findMaxCommonDivsior(a, b);
	long long remainA = a / commonDiv;
	long long remainB = b / commonDiv;
	cout << commonDiv * remainA * remainB << "\n";
}