#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	do {
		if (a + b > c && b + c > a && a + c > b) {
			if (a == b && c == b && c == a)
				cout << "Equilateral" << "\n";
			else if (a == b || b == c || a == c)
				cout << "Isosceles" << "\n";
			else
				cout << "Scalene" << "\n";
		}
		else cout << "Invalid" << "\n";
		cin >> a >> b >> c;
	} while (a != 0 && b != 0 && c != 0);

	return 0;
}