#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    vector<int> distance;
    vector<int> oil_price;
    int result = 0;

    cin >> N;

    for (int i = 0; i < N - 1; i++){
        int input;
        cin >> input;
        distance.push_back(input);
    }

    for (int i = 0; i < N; i++){
        int input;
        cin >> input;
        oil_price.push_back(input);
    }

    int min_oil_price = oil_price[0];

    for (int i = 0; i < N - 1; i++){
        if (oil_price[i] < min_oil_price){
            min_oil_price = oil_price[i];
        }
        result += min_oil_price * distance[i];
    }

    cout << result << endl;

    return 0;
}    