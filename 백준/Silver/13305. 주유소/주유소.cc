#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    vector<long long> distance;
    vector<long long> oil_price;
    long long result = 0;

    cin >> N;

    for (int i = 0; i < N - 1; i++){
        long long input;
        cin >> input;
        distance.push_back(input);
    }

    for (int i = 0; i < N; i++){
        long long input;
        cin >> input;
        oil_price.push_back(input);
    }

    long long min_oil_price = oil_price[0];

    for (int i = 0; i < N - 1; i++){
        if (oil_price[i] < min_oil_price){
            min_oil_price = oil_price[i];
        }
        result += min_oil_price * distance[i];
    }

    cout << result << endl;

    return 0;
}    