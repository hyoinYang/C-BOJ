#include <iostream>

using namespace std;

int compare(const void* a, const void* b) {
	const int* x = (int*)a;
	const int* y = (int*)b;

	if (*x > *y) return 1;
	else if (*x < *y) return -1;
	else return 0;
}


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	int *arr = new int[1000000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	qsort(arr, n, sizeof(int), compare);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	delete[] arr;

}