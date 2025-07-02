#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> dp(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
        dp[i] = 1;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(A[i] < A[j]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << "\n";

    return 0;
}    