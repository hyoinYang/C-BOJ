#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compareNumAndBirth(const pair<int, string>& a, const pair<int, string>&b) {
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	int n;
	cin >> n;
	
	vector<pair<int, int>> numBirth;
	vector<pair<int, string>> numName;

	int num = 1;

	for (int i = 0; i < n; i++) {
		int birth; 
		string name;

		cin >> birth >> name;

		numBirth.push_back(make_pair(num, birth));
		numName.push_back(make_pair(birth, name));

		num++;
	}

	// numBirth를 기준으로 sort 함수 사용
	stable_sort(numName.begin(), numName.end(), compareNumAndBirth);

	// numName 기준으로 출력
	for (auto& numname : numName) {
		cout << numname.first << " " << numname.second << "\n";
	}

}