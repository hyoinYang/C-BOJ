#include <iostream>
#include <queue>
#include <algorithm>

int n, result;
using namespace std;
priority_queue<int, vector<int>, greater<int> > pq;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    while (n--){
        int t;
        cin >> t;
        pq.push(t);
    }

    while(!pq.empty()){
        int sum = 0;
        int first_top = pq.top(); pq.pop();
        int second_top = pq.top(); pq.pop();

        //cout << "first: " << first_top << "second: " << second_top << "\n";
        sum = first_top + second_top;
        //cout << "sum: " << sum << "\n";
        //cout << "size: " << pq.size() << "\n";
        result += sum;

        if (pq.empty()) break;
        pq.push(sum);
        
    }
    cout << result;
    return 0;
}