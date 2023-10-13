#include <iostream>
#include <stack>

using namespace std;

stack<int> st;


int main(void) {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, code, numberOfCode;
	int tmp;

	cin >> numberOfCode;

	while (numberOfCode--) {
		cin >> code;

		switch (code) {
		case 1:
			cin >> x;
			st.push(x);
			break;
		case 2:
			if (st.size())
			{
				cout << st.top() << "\n";
				st.pop();
			}
			else
			{
				cout << -1 << "\n";
			}
			break;
		case 3:
			cout << st.size() << "\n";
			break;
		case 4:
			if (st.empty()) {
				cout << 1 << "\n";
			}
			else
				cout << 0 << "\n";
			break;
		case 5:
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else
				cout << st.top() << "\n";
			break;
		}
	}
}