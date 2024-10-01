#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<char> s1;
vector<char> s2;
int dp[1001][1001];

void sol(){
    for (int i = 1; i <= s1.size(); i++){
        for (int j = 1; j <= s2.size(); j++){
            if (s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1; 
            }
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str1;
    string str2;
    cin >> str1;
    cin >> str2;

    for (int i = 0; i < str1.size(); i++){
        s1.push_back(str1[i]);
    }
    for (int i = 0; i < str2.size(); i++){
        s2.push_back(str2[i]);
    }

    sol();
    
    cout << dp[s1.size()][s2.size()] << endl;

}