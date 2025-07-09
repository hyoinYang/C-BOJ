#include <iostream>
#include <algorithm>

using namespace std;

int dp[10001];
int stairs[10001];

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> stairs[i];
    }
    dp[1] = stairs[1];
    if (n >= 2) dp[2] = stairs[1] + stairs[2];
    if (n >= 3) dp[3] = max(
        stairs[1] + stairs[3],
        stairs[2] + stairs[3]);

    for(int i = 4; i <= n; i++){
        dp[i] = max(
            dp[i-2] + stairs[i],
            dp[i-3] + stairs[i-1] + stairs[i]
        );
    }

    cout << dp[n] << "\n";

    return 0;
}    