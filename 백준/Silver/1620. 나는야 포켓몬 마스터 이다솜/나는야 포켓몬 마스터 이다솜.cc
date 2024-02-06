#include <iostream>
#include <string.h>
#include <map>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int m, n; int idx = 0;
	map<int, string> poket;
	map<string, int> poketNumber;
	cin >> n >> m;
	while (n--) {
		string temp;
		cin >> temp;
		poket.insert(pair<int, string>(idx, temp));
		poketNumber.insert(pair<string, int>(temp, idx));
		idx++;
	}
	int sum = 0;
	while (m--) {
		string command;
		cin >> command;
		if ('0' <= command.c_str()[0] && command.c_str()[0] <= '9') {
			// stoi
			for (int i = 0; i < command.size(); i++) {
				sum = (command.c_str()[i] - '0') + sum * 10;
			}
			cout << poket.at(sum - 1) << "\n";
			sum = 0;
		}
		else {
			cout << poketNumber.at(command) + 1 << "\n";
		}
	}
	
}