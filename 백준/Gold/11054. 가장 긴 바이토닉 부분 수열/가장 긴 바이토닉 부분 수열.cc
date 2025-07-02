#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> dpInc(n);
    vector<int> dpDec(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
        dpInc[i] = 1;
        dpDec[i] = 1;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(A[i] > A[j]){
                dpInc[i] = max(dpInc[i], dpInc[j]+1);
            }
        }
    }

    for(int i = n-2; i >= 0; i--){
        for(int j = n-1; j >= i; j--){
            if(A[i] > A[j])
                dpDec[i] = max(dpDec[i], dpDec[j]+1);
        }
    }
    
    int result = 0;
    for (int i = 0; i < n; i++){
        result = max(result, dpInc[i] + dpDec[i] - 1);
    }

    cout << result << "\n";

    return 0;
}    