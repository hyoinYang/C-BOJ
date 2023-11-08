#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;



int main(void) {

	ios::sync_with_stdio(false);

	int f1, f0, c, n0;
	bool isO = true;

	cin >> f1;
	cin >> f0;

	cin >> c;
	cin >> n0;

	for (int n = n0; n < 10000; n++) {
		if ((f1 * n + f0) > c * n)
			isO = false;
	}


	if (n0 < 0 || c < 0) {
		isO = false;
	}

	if (isO) {
		cout << 1;
	}
	else
		cout << 0;

	return 0;

}