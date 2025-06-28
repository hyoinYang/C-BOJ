#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int N;
    cin >> N;

    long long num[91][2] = {0};
    
    num[1][1]=1; num[1][0]=0;

    for (int i = 2; i <= N; i++){
        num[i][0] = num[i-1][0] + num[i-1][1];
        num[i][1] = num[i-1][0];
    }

    int result = 0;
    for (int i = 0; i <= 1; i++){
        result = (result + num[N][i]);
    }

    cout << num[N][0] + num[N][1] <<"\n";

    return 0;
}    