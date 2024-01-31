#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	int numOfBag = 0;

	while (n > 0) {
		if (n % 5 == 0) {
			numOfBag++; n -= 5;
		}
		else if (n % 3 == 0) {
			numOfBag++; n -= 3;
		}
		else if (n == 2 || n == 1){
			numOfBag = -1;
			break;
		}
		else if (n > 5){
			numOfBag++;
			n -= 5;
		}
		else if (n > 3) {
			numOfBag++;
			n -= 3;
		}
	}
	cout << numOfBag;

	return 0;
}