#include <iostream>
#include <stack>
#include <string>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<char> bracket;
	string str="a";

	while(true) {
		bool isBalance = true;
		getline(cin, str);
		for (int i = 0; i < str.size(); i++) {

			bool ischecked = false;
			if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
				bracket.push(str[i]);
			}
			else if (str[i] == ')' && !bracket.empty()) {
				if (bracket.top() == '(') {
					bracket.pop();
					ischecked = true;
				}
				else {
					!isBalance;
					break;
				}
			}
			else if (str[i] == ']' && !bracket.empty()) {
				if (bracket.top() == '[') {
					bracket.pop();
					ischecked = true;
				}
				else {
					!isBalance;
					break;
				}
			}
			else if (str[i] == '}' && !bracket.empty()) {
				if (bracket.top() == '}') {
					bracket.pop();
					ischecked = true;
				}
				else {
					!isBalance;
					break;
				}
			}
			if ((str[i] == ')' || str[i] == '}' || str[i] == ']') && bracket.empty() && !ischecked) {
				isBalance = false;
				break;
			}

		}


		// check the balance
		if (strcmp(str.c_str(), ".") == 0) { break; }
		else if (isBalance == false) cout << "no" << "\n";
		else if (bracket.size() != 0) {
			cout << "no" << "\n";
			while (bracket.empty() == false) {
				bracket.pop();
			}
		}
		else {
			cout << "yes" << "\n";
		}

	}
}