#include <iostream>

using namespace std;

int MOD=1000000007;

int n, k;

long long fact (int s, int n){
    long long temp = 1;
    for (int i = s; i <= n; i++){
        temp = temp * i % MOD;
    }
    return temp;
}

long long mod_pow(int a, int b){
    if (b == 0) return 1;
    
    long long temp = mod_pow(a, b/2) % MOD;
    
    if (b % 2 == 1) return temp * temp % MOD * a % MOD;
    else return temp*temp%MOD;
}


int main(){
    cin >> n >> k;
    cout << fact(n-k+1, n) * mod_pow(fact(1, k), MOD-2) % MOD;
    return 0;
}
