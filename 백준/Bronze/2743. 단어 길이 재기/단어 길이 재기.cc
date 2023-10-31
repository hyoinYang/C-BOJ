#include <vector>
#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);


	string s;

	cin >> s;

	vector<char> input(s.begin(), s.end());
	input.push_back('\0');


	cout << input.size()-1 << endl;


	return 0;

}