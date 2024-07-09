#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int C, N;
vector<pair<int, int>> v;
int dp[100001];

void solution() {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 100000; j++) {
            int cost = v[i].first;
            int man = v[i].second;

            if (j - cost >= 0) {
                dp[j] = max(dp[j], dp[j - cost] + man);
            }
        }
    }

    for (int i = 1; i <= 100000; i++) {
        if (dp[i] >= C) {
            cout << i;
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> C >> N;

    v.push_back({ 0,0 });
    int a, b;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        v.push_back({ a,b });
    }

    solution();

    return 0;
}