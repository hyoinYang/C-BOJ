#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int x, y;
	cin >> x >> y;

	if (x <= y) cout << y-x;
	else cout << x + y;

	return 0;
}
