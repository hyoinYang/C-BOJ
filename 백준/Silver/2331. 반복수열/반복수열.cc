#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int calcNext(int base, int pow_num){
    int result = 0;
    while(base != 0){
        int digit = base % 10;
        result += (pow(digit, pow_num));
        base /= 10;
    }

    return result;
}


int main(){

    int A, P;
    cin >> A >> P;

    map<int, int> visited;

    int cur = A;
    int index = 1;

    while(visited[cur] == 0){
        visited[cur] = index++;
        cur = calcNext(cur, P);
    }
    
    cout << visited[cur] - 1 << "\n";


    return 0;
}    