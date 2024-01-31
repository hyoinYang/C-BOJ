#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	set<char> chars = { 0 };

	int flag = 1;
	int numDupli = 0;


	while (n--) {
		string str;
		cin >> str;

		const char* ch = str.c_str();
		int size = str.size();

		for (int i = 0; i < size; i++) {
			if (ch[i] != ch[i - 1]) { // 연속 단어가 아닐 때
				if (chars.find(ch[i]) != chars.end()) { // 이미 중복된 문자일 때
					flag = 0;
				}
				else {
					chars.insert(ch[i]);
				}
			}
			else { // 연속 단어일 때
				chars.insert(ch[i]);
			}
		}
		if (flag == 1) {
			numDupli++;
		}
		flag = 1;
		chars.clear();
	}

	cout << numDupli;

}