#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

int dp[100001];
int nums[100001];

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> nums[i];
    }
    dp[1] = nums[1];

    for(int i = 2; i <= n; i++){
        dp[i] = max(nums[i], dp[i-1] + nums[i]);
    }
    
    cout << *max_element(dp + 1, dp + n + 1) << "\n";

    return 0;
}    