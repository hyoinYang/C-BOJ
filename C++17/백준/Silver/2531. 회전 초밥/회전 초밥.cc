#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000009;
long long dp[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, d, k, c;
    cin >> N >> d >> k >> c;
    int a[30001] = {0};

    for (int i = 0; i < N; i++){
        cin >> a[i];
    }

    int removeIdx, addIdx = 0;
    int cnt[30001] = {0};
    int ans = 0;
    int dis = 0;


    for (int i = 0; i < k; i++){
        if(cnt[a[i]] == 0) dis++;
        cnt[a[i]]++;
    }

    for (int i = 0; i < N; i++){
        removeIdx = i;
        addIdx = (i + k) % N;

        --cnt[a[removeIdx]];
        if(cnt[a[removeIdx]] == 0) dis--;

        if(cnt[a[addIdx]] == 0) dis++;
        ++cnt[a[addIdx]];

        ans = max(ans,
            dis + (cnt[c] == 0? 1 : 0));

    }

    cout << ans << "\n";

    return 0;
}