#include <iostream>

#define MOD 1000000

using namespace std;


void initializeMatrix(long long matrix[2][2]) {
    matrix[0][0] = 1; matrix[0][1] = 1;
    matrix[1][0] = 1; matrix[1][1] = 0;
}

void multiplyMatrix(long long A[2][2], long long B[2][2]) {
    long long result[2][2] = {0};
    
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                result[i][j] += A[i][k] * B[k][j];
            }
            result[i][j] = result[i][j]%MOD;
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            A[i][j] = result[i][j];
        }
    }
}

void fibonacci(long long A[2][2], long long n) {
    if (n > 1){
        fibonacci(A, n/2);
        multiplyMatrix(A, A);

        if (n % 2 == 1){
            long long B[2][2];
            initializeMatrix(B);
            multiplyMatrix(A, B);
        }
    }
}

int main() {
    long long n;
    cin >> n;

    if (n == 0) cout << 0;
    else{
        long long A[2][2];
        initializeMatrix(A);
        fibonacci(A, n);
        cout << A[0][1];
    }
    return 0;
}
