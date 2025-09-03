#include <iostream>
#include <algorithm>

using namespace std;

long long dp[201][201];

int main(){

    int N, K;
    cin >> N >> K;

    for(int n = 0; n <= N; n++) dp[1][n] = 1;
    for(int k = 1; k <= K; k++) dp[k][0] = 1;
    
    for(int k = 2; k <= K; k++){
        for(int n = 1; n <= N; n++){
            dp[k][n] = (dp[k-1][n] + dp[k][n-1]) % 1000000000;
        }
    }

    cout << dp[K][N] % 1000000000 << "\n";


    return 0;
}    