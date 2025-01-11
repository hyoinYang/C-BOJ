#include <iostream>

#define MOD 1000;

using namespace std;
long long n, b;
long long a[5][5];
long long res[5][5];

void multiple(long long x[5][5], long long y[5][5]){
    long long tmp[5][5];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            tmp[i][j] = 0;
            for (int k = 0; k < n; k++){
                tmp[i][j] += ((x[i][k] * y[k][j]));
            }
            tmp[i][j] %= MOD;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            x[i][j] = tmp[i][j];
        }
    }
}

int main(){
    cin >> n >> b;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
        res[i][i] = 1;
    }

    while (b > 0){
        if (b % 2 == 1)
            multiple(res, a);
        multiple(a, a);
        b /= 2;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
    
}