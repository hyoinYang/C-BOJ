#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    vector<long long> nums;

    cin >> N >> M;

    for (int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    for (int i = 0; i < M; i++){
        sort(nums.begin(), nums.end());
        long long sum = nums[0] + nums[1];
        nums[0] = nums[1] = sum;
    }

    long long result = 0;
    for (long long n : nums){
        result += n;
    }

    cout << result << endl;
}