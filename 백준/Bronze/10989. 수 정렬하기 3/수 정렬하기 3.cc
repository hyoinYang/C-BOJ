#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	int* arr = new int[10000+1] {0};

	for (int i = 0; i < n; i++) {
		int idx;
		cin >> idx;
		arr[idx]++;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << "\n";
		}
	}

}