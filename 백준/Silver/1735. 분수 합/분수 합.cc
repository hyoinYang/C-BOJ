#include <iostream>

using namespace std;

int findCommonDiv(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int aNumer, aDenomi, bNumer, bDenomi;
	cin >> aNumer >> aDenomi >> bNumer >> bDenomi;

	int numer = (aNumer * bDenomi) + (aDenomi * bNumer);
	int denomi = aDenomi * bDenomi;
	int div = findCommonDiv(numer, denomi);

	cout << numer / div << " " << denomi / div;
}