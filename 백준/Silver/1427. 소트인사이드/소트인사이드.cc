#include <iostream>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	char c; int size = 0;
	int nums[10] = { 0 };

	while ((c = cin.get()) != '\n') {

		size++;
		nums[c - '0']++;
	}

	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < nums[i]; j++) {
			cout << i;
		}
	}

}