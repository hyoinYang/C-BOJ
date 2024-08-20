#include <iostream>
#include <vector>
#include <map>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;
#define INT_MIN (-2147483647 - 1);

int t, n;
int yeong[3];
int jong[3];
vector<tuple<int, int, int>> comm;
int dp[10010];

int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool is_leap(int y) {
	return !(y % 400) || ((y % 100) && !(y % 4));
}

int days(int y, int m, int d) {
	int ret = 0;
	for (int i = 0; i < y; i++) {
		ret += is_leap(i) ? 366 : 365;
	}
	bool leap = is_leap(y);
	for (int i = 1; i < m; i++) {
		ret += (leap && i == 2) ? day[i - 1] + 1 : day[i - 1];
	}
	ret += d;
	return ret;
}
/*
int knapsack(int idx, int t) {
	if (t < 0) return INT_MIN;;
	if (idx == n) {
		return days(yeong[0], yeong[1], yeong[2]) - days(jong[0], jong[1], yeong[2]);
	}
	int do_something, do_nothing;
	switch (get<0>(comm[idx])) {
	case 1:
		do_something = knapsack(idx + 1, t - get<1>(comm[idx])) + get<2>(comm[idx]);
		break;
	case 2:
		do_something = knapsack(idx + 1, t - get<1>(comm[idx])) + get<2>(comm[idx]);
		break;
	case 3:
		do_something = knapsack(idx + 1, t - get<1>(comm[idx])) + 30 * get<2>(comm[idx]);
		break;
	}
	do_nothing = knapsack(idx + 1, t);
	return max(do_nothing, do_something);
	
}
*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 3; i++) {
		cin >> yeong[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> jong[i];
	}

	cin >> t >> n;
	
	//comm.resize(n);

	int diff = days(jong[0], jong[1], jong[2]) - days(yeong[0], yeong[1], yeong[2]);
	for (; n--;) {
		int op, c, k;
		cin >> op >> c >> k;
		if (op == 3) k *= 30;
		for (int i = t; i >= c; i--) {
			dp[i] = max(dp[i], dp[i - c] + k);
		}
	}
	printf("%d", abs(diff - *max_element(dp, dp + t + 1)));
    return 0;
}