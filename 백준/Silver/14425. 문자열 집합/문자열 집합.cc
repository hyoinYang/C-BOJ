#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	vector<string> strN;
	int dupli = 0;

	cin >> n >> m;

	while (n--) {
		string str;
		cin >> str;
		strN.push_back(str);
	}

	sort(strN.begin(), strN.end());

	while (m--) {
		string str;
		cin >> str;
		if (binary_search(strN.begin(), strN.end(), str)) {
			dupli++;
		}
	}
	
	cout << dupli;
}