#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<string> person;
	vector<string> final;
	int n, m;
	cin >> n >> m;
	while (n--) {
		string temp;
		cin >> temp;
		person.push_back(temp);
	}
	
	sort(person.begin(), person.end());

	while (m--) {
		string temp;
		cin >> temp;
		if (binary_search(person.begin(), person.end(), temp)) {
			final.push_back(temp);
		}
	}
	sort(final.begin(), final.end());
	cout << final.size() << "\n";
	for (auto p : final) {
		cout << p << "\n";
	}
}