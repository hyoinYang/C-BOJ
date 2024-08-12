#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n, m;
	string s;
	cin >> n >> m >> s;
	int result = 0;
	
	// O(N)
	for (int i = 0; i < s.size(); i++) {
		int numIOI = 0;
		if (s[i] == 'O') continue;
		else {
			while (s[i + 1] == 'O' && s[i + 2] == 'I') {
				numIOI++;

				if (numIOI == n) {
					result++;
					numIOI--;
				}
				i += 2;
			}
		}

	}

	cout << result;

    return 0;
}