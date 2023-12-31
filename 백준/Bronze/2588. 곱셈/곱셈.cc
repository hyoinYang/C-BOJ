#include <iostream>

using namespace std;

// digit는 1, 10, 100의 숫자
int convertDigit(int digit, int source) {
	switch (digit) {
	case 1:
		return source % 10;
		break;
	case 10:
		return (source % 100 - source % 10) / 10;
		break;
	case 100:
		return (source % 1000 - source % 100) / 100;
		break;
	}
}

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	cout << convertDigit(1, n2) * n1 << "\n";
	cout << convertDigit(10, n2) * n1 << "\n";
	cout << convertDigit(100, n2) * n1 << "\n";
	cout << n1 * n2;
}