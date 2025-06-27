#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        int N;
        cin >> N;

        int dp[12] = {0};
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        for (int i = 4; i <= N; i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }

        cout << dp[N]<<"\n";

    }

    return 0;
}