#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	int student[1000] = { 0 };
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> student[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (student[i] > student[j]) {
				int temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}

	cout << student[n-k];

	return 0;
}