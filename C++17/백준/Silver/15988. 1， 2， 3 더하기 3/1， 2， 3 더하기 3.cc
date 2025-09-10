#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000009;
long long dp[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    vector<int> nums;
    int maxN = 0;

    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
        if (temp > maxN) maxN = temp;

    }

    for(int i = 4; i <= maxN; i++){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }

    for (int n : nums){
        cout << dp[n] << "\n";
    }


    return 0;
}