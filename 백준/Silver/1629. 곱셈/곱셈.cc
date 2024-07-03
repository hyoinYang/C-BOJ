#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int a, b, c;
	cin >> a >> b >> c;

	int r[31];
	r[1] = 1; // 2의 1~30제곱 저장
	for (int i = 2; i < 31; i++) {
		r[i] = r[i - 1] * 2;
	}

	long long mod[31];
	mod[1] = a % c; //a%c의 1, 2, 4, ... ,2^30 제곱 (=r[i])저장
	for (int i = 2; i < 31; i++) {
		mod[i] = (mod[i - 1] * mod[i - 1]) % c;
	}

	int result = 1;
	while (b > 0) {
		for (int i = 30; i >= 1; i--) {
			if (b >= r[i]) {
				result = result * mod[i] % c;
				b -= r[i];
			}
		}
	}
	cout << result;
}