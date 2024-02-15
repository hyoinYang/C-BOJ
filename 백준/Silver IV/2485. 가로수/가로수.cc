#include <iostream>
#include <vector>
#include <set>

using namespace std;

int getGcd(int a, int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return getGcd(b, r);
}


int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> existing;
	vector<int> dist;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		existing.push_back(temp);
		if (i != 0) 
			dist.push_back(existing[i] - existing[i - 1]);
	}


	// 가로수 간격의 최대공약수 구하기
	int gcd = dist[0];
	for (int i = 1; i < dist.size(); i++) {
		gcd = getGcd(gcd, dist[i]);
	}

	int len = existing[n - 1] - existing[0];
	int cnt = len / gcd;
	cnt -= n - 1;
	cout << cnt;

	//int totalDist = existing[existing.size() - 1] - existing[0];
	//int ans = (totalDist / gcd) + 1 - (existing.size());

	//int ans = (existing[existing.size() - 1] - existing[0]) / min + 1 - existing.size();
	
}