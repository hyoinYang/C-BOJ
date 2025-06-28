#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int T;
    cin >> T;

    while (T--){
        int N;
        cin >> N;

        int sticker[2][100001] = {0};
        int dp[100001][2] = {0};

        for (int i = 0; i < 2; i++) {
            for (int j = 1; j <= N; j++) {
                cin >> sticker[i][j];
            }
        }

        dp[1][0] = sticker[0][1];
        dp[1][1] = sticker[1][1];

        for (int i = 2; i <= N; i++){
            dp[i][0] = max(dp[i-1][1], dp[i-2][1]) + sticker[0][i];
            dp[i][1] = max(dp[i-1][0], dp[i-2][0]) + sticker[1][i];
        }
        
        cout << max(dp[N][0], dp[N][1]) << "\n";
    }

    return 0;
}    