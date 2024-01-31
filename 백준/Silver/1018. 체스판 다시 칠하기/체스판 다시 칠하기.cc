#include <iostream>

using namespace std;

string wStart[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW" };
string bStart[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"};

string board[50];

int wcount(int x, int y) {
	int different = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != wStart[i][j]) different++;
		}
	}
	return different;
}

int bcount(int x, int y) {
	int diffenent = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != bStart[i][j]) diffenent++;
		}
	}
	return diffenent;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int minDiff = 2500;
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	for (int i = 0; i <= n-8; i++) {
		for (int j = 0; j <= m-8; j++) {
			int tmp = min(wcount(i, j), bcount(i, j));
			if (tmp < minDiff) {
				minDiff = tmp;
			}
		}
	}
	cout << minDiff;
	
	return 0;
}