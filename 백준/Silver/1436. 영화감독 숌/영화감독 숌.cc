#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int title = 0;
	int current = 0;

	while (current != n) {
		title++;
		int temp = title;

		while (temp != 0) {
			if (temp % 1000 == 666) {
				current++;
				break;
			}
			else {
				// 일의 자리 숫자 삭제 => 가장 작은 종말의 수 출력
				temp /= 10;
			}
		}
	}
	cout << title;

	return 0;
}