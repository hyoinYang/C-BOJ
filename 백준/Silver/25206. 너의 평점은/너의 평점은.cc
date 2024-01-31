#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	double sum = 0;
	int numSubject = 0;
	int t = 20;


	while (t--) {
		string str;
		getline(cin, str);

		vector<string> tokens;
		// 문자열 파싱
		istringstream iss(str);
		string s;
		while (iss >> s) {
			tokens.push_back(s);
		}

		// 학점을 int 형으로 변환하기
		const char* ch = tokens.at(1).c_str();
		int credit = 0;
		credit = ch[0] - '0';
		
		// P 등급이 있는지 확인
		if (strcmp(tokens.at(2).c_str(), "P") == 0) {
			continue;
		}

		else {
			if (strcmp(tokens.at(2).c_str(), "A+") == 0) {
				sum += (credit * 4.5);
				numSubject += credit;
			}
			else if (strcmp(tokens.at(2).c_str(), "A0") == 0) {
				sum += (credit * 4.0);
				numSubject += credit;
			}
			else if (strcmp(tokens.at(2).c_str(), "B+") == 0) {
				sum += (credit * 3.5);
				numSubject += credit;
			}
			else if (strcmp(tokens.at(2).c_str(), "B0") == 0) {
				sum += (credit * 3.0);
				numSubject += credit;
			}
			else if (strcmp(tokens.at(2).c_str(), "C+") == 0) {
				sum += (credit * 2.5);
				numSubject += credit;
			}
			else if (strcmp(tokens.at(2).c_str(), "C0") == 0) {
				sum += (credit * 2.0);
				numSubject += credit;
			}
			else if (strcmp(tokens.at(2).c_str(), "D+") == 0) {
				sum += (credit * 1.5);
				numSubject += credit;
			}
			else if (strcmp(tokens.at(2).c_str(), "D0") == 0) {
				sum += (credit * 1.0);
				numSubject += credit;
			}
			else {
				sum += (credit * 0.0);
				numSubject += credit;
			}
		}
		tokens.clear();

	}
	cout << sum / numSubject;
}