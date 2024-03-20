#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		stack<char> vpsTest;
		int flag = 1;
		string input;
		cin >> input;

		for (int idx = 0; idx < input.size(); idx++) {
			if (vpsTest.size() > 0) {
				switch (input[idx]) {
				case')':
					if (vpsTest.top() == '(') {
						vpsTest.pop();
						break;
					}
					else {
						flag = 0;
						break;
					}
				case'}':
					if (vpsTest.top() == '{') {
						vpsTest.pop();
						break;
					}
					else {
						flag = 0;
						break;
					}
				case']':
					if (vpsTest.top() == '[') {
						vpsTest.pop();
						break;
					}
					else {
						flag = 0;
						break;
					}
				default:
					vpsTest.push(input[idx]);
				}
			}
			else {
				vpsTest.push(input[idx]);
			}
		}
		
		if (flag == 1 && vpsTest.size() == 0) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}