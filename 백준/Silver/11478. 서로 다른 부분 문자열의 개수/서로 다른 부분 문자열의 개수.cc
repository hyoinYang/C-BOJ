#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string str;
	cin >> str;

	set<string> set;

	string s = "";

	for (int i = 0; i < str.size(); i++) {
		for (int j = i; j < str.size(); j++) {
			s += str[j];
			set.insert(s);
		}
		s = "";
	}

	cout << set.size();
	
}