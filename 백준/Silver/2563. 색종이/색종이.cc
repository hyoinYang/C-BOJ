#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	int canvus[100][100] = {0};
	int idxX = 0; int idxY = 0;

	while (t--) {
		cin >> idxX >> idxY;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				canvus[idxX + i][idxY + j] = 1;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			sum += canvus[i][j];
		}
	}
	
	cout << sum;

}