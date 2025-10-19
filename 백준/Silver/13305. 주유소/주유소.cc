#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    vector<int> distance;
    vector<int> city;
    int result = 0;
    int need_oil = 0;

    cin >> N;

    for (int i = 0; i < N - 1; i++){
        int input;
        cin >> input;
        distance.push_back(input);

        need_oil += input;
    }

    int min_oil_price = distance[0];

    for (int i = 1; i < distance.size() - 1; i++){
        min_oil_price = min_oil_price < distance[i] ? min_oil_price : distance[i];
    }

    for (int i = 0; i < N; i++){
        int input;
        cin >> input;
        city.push_back(input);
    }

    for (int i = 0; i < city.size(); i++){
        if (city[i] == min_oil_price){
            result += min_oil_price * need_oil;
            break;
        }
        else{
            result += distance[i] * city[i];
            need_oil -= distance[i];
        }
    }

    cout << result << endl;

    return 0;
}    