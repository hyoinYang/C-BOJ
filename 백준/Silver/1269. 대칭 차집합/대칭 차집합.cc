#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<long> a;
	vector<long> b;
	int aMb=0;
	int bMa=0;

	int aNum, bNum;

	cin >> aNum >> bNum;
	while (aNum--) {
		long temp;
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());

	while (bNum--) {
		long temp;
		cin >> temp;
		b.push_back(temp);

		if (!(binary_search(a.begin(), a.end(), temp))) {
			aMb++;
		}
	}
	sort(b.begin(), b.end());

	for (int i = 0; i < a.size(); i++) {
		if (!(binary_search(b.begin(), b.end(), a[i]))) {
			bMa++;
		}
	}

	cout << aMb + bMa;
}