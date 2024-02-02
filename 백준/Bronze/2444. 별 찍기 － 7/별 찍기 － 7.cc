#include <iostream>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < (2 * n - 1) / 2; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i < 2 * n - 1; i++) {
		cout << "*";
	}

	cout << "\n";


	for (int i = 0; i < (2 * n - 1) / 2; i++) {
		for (int j = 0; j < (2 * i + 1) / 2 + 1; j++) {
			cout << " ";
		}
		for (int k = (2 * n - 1) - (2 * i + 1) - 1; k > 0; k--) {
			cout << "*";
		}
		cout << "\n";

	}


}