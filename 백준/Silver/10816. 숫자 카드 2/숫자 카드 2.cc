#include <iostream>
#include <string.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m; int idx = 0;
	unordered_map <long, int> dupli;
	cin >> n;
	
	while (n--) {
		long temp;
		cin >> temp;
		dupli[temp]++;
	}

	cin >> m;
	
	while (m--) {
		long temp;
		cin >> temp;
		cout << dupli[temp] << " ";
	}
	
}