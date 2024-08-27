#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string jaeStr;
	string doc;
	cin >> jaeStr;
	cin >> doc;
	
	bool isGo = true;

	int jaeA, docA;
	jaeA = jaeStr.size();
	docA = doc.size();

	if (jaeA >= docA) cout << "go";
	else cout << "no";

	return 0;
}
