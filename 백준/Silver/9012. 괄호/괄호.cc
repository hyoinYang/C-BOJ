#include <iostream>
#include <stack>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;

	while (n--) {
		stack<char> vps;
		bool isvps = true;
		string sentence;
		cin >> sentence;
		for (char ch : sentence) {
			if (ch == '(') vps.push(ch);
			else if (ch == ')') {
				if (vps.size() > 0 && vps.top() == '(') vps.pop();
				else {
					isvps = false;
					break;
				}
			}
		}
		
		if (isvps && vps.size() == 0) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}