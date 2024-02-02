#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <string.h>
using namespace std;

bool compare(const string a, const string b) {
	if (a.size() != b.size()) return a.size() < b.size();
	return a < b;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; string temp;
	cin >> n;
	vector<string> words;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		words.push_back(temp);
	}
	sort(words.begin(), words.end(), compare);
	// 중복 제거
	words.erase(unique(words.begin(), words.end()), words.end());

	for (auto word : words) {
		cout << word << "\n";
	}
}