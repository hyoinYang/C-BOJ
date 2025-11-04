#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<int> B(N);

    int result = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    
    for (int i = 0; i < N; i++)
    {
        result += B[i] * A[i];
    }


    cout << result << endl;

}