#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int sum = 0;
	int nums[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
		sum += nums[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (nums[i] > nums[j]) {
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}

	cout << sum / 5 << "\n" << nums[2];

	return 0;
}