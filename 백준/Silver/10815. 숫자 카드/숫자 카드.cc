#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int finding(int* arr, int left, int right, int key) {
	int middle = (left + right) / 2;

	if (key == arr[middle]) return 1;

	else if (key < arr[middle]) {
		if (left == right) return 0;
		else return finding(arr, left, middle, key);
	}

	else {
		if (left == right) return 0;
		else return finding(arr, middle + 1, right, key);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	int n, m;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	
	cin >> m;
	long long s;
	for (int i = 0; i < m; i++) {
		cin >> s;
		cout << finding(arr, 0, n-1, s) << " ";
	}
}