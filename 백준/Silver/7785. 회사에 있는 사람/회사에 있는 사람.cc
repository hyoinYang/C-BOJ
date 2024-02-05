#include <iostream>
#include <string.h>
#include <set>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string command[2]; int n;
	set<string> people;
	cin >> n;
	while (n--) {
		cin >> command[0];
		cin >> command[1];

		if (strcmp(command[1].c_str(), "enter") == 0) {
			people.insert(command[0]);
		}
		else if (strcmp(command[1].c_str(), "leave") == 0) {
			people.erase(command[0]);
		}
	}

	for (auto rit = people.rbegin(); rit != people.rend(); rit++) {
		cout << *rit << "\n";
	}
}